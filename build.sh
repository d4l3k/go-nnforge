cd nnForge/nnforge
cp ../../import.go .
cp ../../nnforge.swigcxx .

rm nnforge.go
rm nnforge_wrap.cxx
rm nnforge_gc.c

go build -x
