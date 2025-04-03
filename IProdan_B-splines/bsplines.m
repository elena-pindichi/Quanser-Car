% IP 2015
% compute bspline basis functions for a given order, use symbolic variables
% and symfunctions
% the theory is taken from http://web.mit.edu/hyperbook/Patrikalakis-Maekawa-Cho/node17.html
% d=order of the bsplines (they are d-order derivable)
% n+1 is the number of basis functions

function [b,knot]=bsplines(n,d,knot)

% the knot vector is either given or is computed between 0 and 1 such that
% the resulting b-spline curve is clamped

%generate the knot vector, there are several posibilities
% if the vector is empty we generate it between 0 and 1 such that the
% resulting b-spline curve is clamped
if nargin==2
    knot=[0 1];
end
% if the knot is not of length n+d+1 it means it's either incorrectly
% written or that we consider only the ends to generate the real knot
if length(knot)~=n+1+d
    knot=[ones(1,d-1)*min(knot) linspace(min(knot), max(knot),n-d+3) ones(1,d-1)*max(knot)];
end
m=length(knot)-1;

% treat differently the case k=1
b=[];
for i=1:m  
    b{1}{i}=@(t)((t>=knot(i)).*(t<knot(i+1)));
end
% apply the reccurence law for k=2:d
for k=2:d
    for i=1:m-k+1
        if (knot(i+k-1)-knot(i)~=0) && (knot(i+k)-knot(i+1)~=0)
            b{k}{i}=@(t)((b{k-1}{i}(t).*(t-knot(i))./(knot(i+k-1)-knot(i)) + b{k-1}{i+1}(t).*(knot(i+k)-t)./(knot(i+k)-knot(i+1))));
        elseif (knot(i+k-1)-knot(i)~=0)
            b{k}{i}=@(t)(b{k-1}{i}(t).*(t-knot(i))./(knot(i+k-1)-knot(i)));
        elseif (knot(i+k)-knot(i+1)~=0)
            b{k}{i}=@(t)(b{k-1}{i+1}(t).*(knot(i+k)-t)./(knot(i+k)-knot(i+1)));
        else
            b{k}{i}=@(t)(zeros(size(t)));
        end
    end
end


%compute matrices Lr
L=zeros(n+1,n+2);
a=[1:n]/(n+1);





