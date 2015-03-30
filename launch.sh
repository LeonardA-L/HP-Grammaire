NOW=$(date +"%d-%m-%Y-%T")
make tests -j4 && (clear ; echo "---------- $NOW ----------" ;  ./run -a -e test.lt)
