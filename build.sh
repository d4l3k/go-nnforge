export NNFORGE=nnForge/nnforge
cp import.go $NNFORGE
cp nnforge.swigcxx $NNFORGE

rm nnforge.go
rm nnforge_gc.c
rm nnforge_wrap.cxx

go build -x

#swig -go -intgosize 64 -module nnforge -I/usr/include/boost/tr1/tr1 -I/usr/include -I/usr/local/cuda/include -I/usr/local/cuDNNf -c++ nnforge.swigcxx
rm nnforge_gc.c
rm nnforge_wrap.cxx
