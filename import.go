package nnforge

//#cgo CXXFLAGS: -I/usr/include/boost/tr1/tr1 -I/usr/include -I/usr/include -ffast-math -march=native  -mfpmath=sse -msse2  -O3   -c -lboost_thread-mt -lboost_regex-mt -lboost_chrono-mt -lboost_filesystem-mt -lboost_program_options-mt -lboost_random -lboost_system -lboost_date_time -lboost_program_options
import "C"

//#cgo CXXFLAGS: -std=c++11 -lboost_thread-mt -lboost_regex-mt -lboost_chrono-mt -lboost_filesystem-mt -lboost_program_options-mt -lboost_random -lboost_system -lboost_date_time -lboost_regex -ffast-math -march=native -mfpmath=sse -msse3 -I/usr/include/boost/tr1/tr1 -I/usr/include -I/usr/include/random -D NNFORGE_CPP11COMPILER
