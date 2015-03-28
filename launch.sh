NOW=$(date +"%d-%m-%Y-%T")
make -j4 && (clear ; echo "---------- $NOW ----------" ;  ./run -a test.lt)
