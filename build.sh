cd nnForge/nnforge
cp ../../import.go .
cp ../../nn_types.h .
cp ../../nnforge.swigcxx .

rm nnforge.go
rm nnforge_wrap.cxx
rm nnforge_gc.c

go build -x
