% IP 2015
% we assume known n (n+1 control points), d (the degree of the splines) and
% knot (the knot vector characterizing the basis bsplines)
% constructive details taken from Suryawan phd thesis - Appendix 3.a
% (pp 56-84)

function[M,Sd]=bsplineConversionMatrices(n,d,knot)
% compute matrices Mr
tmp=eye(n+1);
for r=1:d
    M{r}=zeros(n+r,n+1+r);
    for i=1:n+r
        if knot(i+d-r)==knot(i)
            M{r}(i,i)=0;
        else
            M{r}(i,i)=(d-r)/(knot(i+d-r)-knot(i));
        end
        if knot(i+d-r+1)==knot(i+1)
            M{r}(i,i+1)=0;
        else
            M{r}(i,i+1)=-(d-r)/(knot(i+d-r+1)-knot(i+1));
        end
    end
    tmp=tmp*M{r};
    M{r}=tmp;
end

Sd=[];











