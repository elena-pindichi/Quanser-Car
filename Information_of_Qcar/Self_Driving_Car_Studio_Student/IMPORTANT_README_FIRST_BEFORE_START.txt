==========================================================================================================
Self Driving Car Studio Lab Student
==========================================================================================================


Installation Steps: 
(ONLY FOR WINDOWS MACHINES. 
Linux and macOS are not currently supported.)
--------------------------------------------------

NOTE: The files within the src folder are not for direct use. 

1. Read the software requirements below if you have more questions about the necessary
   downloads to run the content.

  SOFTWARE REQUIREMENTS: On your Windows development machine (PC or laptop),
  a. To interface to physical hardware, with or without virtual experiments, 
    i. If using MATLAB Simulink:
      - install MATLAB Simulink and QUARC as described in the QUARC Quick Installation Guide 
	(https://download.quanser.com/doc/latest/QUARC_Quick_Installation_Guide.pdf)  

    ii. If using Python:
      - the installation of Python 3.11+ will be carried out when running setup.bat 
      - install the Quanser SDK for Windows. (https://github.com/quanser/quanser_sdk_win64)

  b. To interface to ONLY the virtual experiments,
    i. If using MATLAB Simulink, with or without Python:
      - install a version of MATLAB Simulink compatible with the Quanser Interactive Labs MATLAB Add-on  
        (https://www.mathworks.com/matlabcentral/fileexchange/123860-quanser-interactive-labs-for-matlab) 
      - install Quanser Interactive Labs for MATLAB using the Add-on Manager in MATLAB 
			  
    ii. If using ONLY Python:
      - the installation of Python 3.11+ will be carried out when running setup.bat
      - install both Quanser Interactive Labs and the Quanser SDK for Windows as described here  
        (https://qlabs.quanserdocs.com/en/latest/Get%20Started.html#installation-set-up)

2. The setup requires Python. If a compatible version is not installed, 
   the user will be prompted to install it from the provided installer 
   (in which case please ensure to check the 'Add python.exe to PATH' option). 

3. Make sure your machine is connected to the internet. 

  WARNING: DO NOT CONNECT THE INTERNET CABLE DIRECTLY TO THE
	   PROVIDED ROUTER. THIS MAY CAUSE UNEXPECTED BEHAVIOR DUE TO
	   AUTOMATIC ROUTER FIRMWARE UPDATES.
  Caution: If an internet connection is not available, the setup
  	   process will proceed to finish offline. Python examples
	   might not function properly due to potentially missing
	   or incompatible libraries.

4. On your machine, please double-click on the setup.bat located in this folder.

  The setup.bat script was designed to:
   - Install Python if not on your PC
   - Copy the content of src\ onto the local machine under the C:\Users\<USER>\Documents\Quanser directory
   - Define the PYTHONPATH variable on your system which points to custom
     Quanser python libraries within the src\libraries\python folder
   - Install the python dependencies required for users using python.

5. Restart your machine for changes to be saved.
	
6. Based on the equipment purchased:
   - Review the user_manuals to get started with the specific products
   - Review the setup folder to see the setup guides for our studio products
   - See the examples folder to get started with product/solution specific examples

Please contact Quanser customer success team (tech@quanser.com) regarding any questions or concerns with 
the setup process.


==========================================================================================================
Self Driving Car Studio Lab Student:
==========================================================================================================

src	 	  			: Source folder for files used by the Self Driving Car Studio Lab.
- user_manuals    	: User manuals related to the QCar and the traffic light.
- setup           	: Setup for the self driving car studio.
- concept_reviews 	: Consists of background concepts utilized in the provided curriculum.
- libraries	  		: Source location for custom Python/Simulink libraries.
- examples	  		: Consists of research examples in either Simulink/Python/ROS for the QCar.
- SDCS   	        : Consists of the skills activities and user guides for the Self-Driving Car Studio.


==========================================================================================================
Change Log:
==========================================================================================================

SDCS_Student_v2.0 (2024-10-01):
---------------------------------------------
- Added support for QCar 2.
- Updated Traffic light libraries, examples and user manuals.

SDCS_Student_v1.0 (2024-07-31):
---------------------------------------------
- First release of standalone SDCS skills activities and content. 
