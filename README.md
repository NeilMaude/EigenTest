# EigenTest
Test project using Eigen matrix library

This project is a quick exploration of the Eigen matrix library, using Visual Studion 2017 (Community)/MSVC C++.

Appears to require that #include statements use the full file path, which is likely just my understanding of 
VS2017 environment/build settings (path has been added to the Include path, but doesn't seem to work...).

Update: the Eigen include can be achieved with `#include "Eigen\Dense"` or similar, provided that the Eigen
library code is included in the source directory for the project (seems to be the accepted way of doing this).
