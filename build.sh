export NNFORGE=nnForge/nnforge
cp import.go $NNFORGE
cp nnforge.swigcxx $NNFORGE

go build -x
