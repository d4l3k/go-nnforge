package nnforge

//#cgo CPPFLAGS: -I/usr/include/boost/tr1/tr1 -I/usr/include -ffast-math -march=native  -mfpmath=sse -msse2 -lopencv_highgui -lopencv_imgproc -lopencv_core -lcudnn -lcurand -lcusparse -lcublas -lcudart -lnetcdf -lnetcd  -O3    -lboost_thread-mt -lboost_regex-mt -lboost_chrono-mt -lboost_filesystem-mt -lboost_program_options-mt -lboost_random -lboost_system-mt -lboost_system -lboost_date_time -lboost_program_options -I/usr/local/cuda/include -I/usr/local/cuDNNf
//#cgo LDFLAGS: -lopencv_highgui -lopencv_imgproc -lopencv_core -lboost_thread -lboost_regex -lboost_chrono -lboost_filesystem -lboost_program_options -lboost_random -lboost_system -lboost_date_time -lboost_program_options
import "C"

//#cgo CXXFLAGS: -std=c++11 -lboost_thread-mt -lboost_regex-mt -lboost_chrono-mt -lboost_filesystem-mt -lboost_program_options-mt -lboost_random -lboost_system -lboost_date_time -lboost_regex -ffast-math -march=native -mfpmath=sse -msse3 -I/usr/include/boost/tr1/tr1 -I/usr/include -I/usr/include/random -D NNFORGE_CPP11COMPILER
