NOW=$(date +"%d-%m-%Y-%T")
clear
make -j4 && cd ./Tests && ./mktest.sh && cd ..

#make tests -j4 && (clear ; echo "---------- $NOW ----------" ;  ./run -a -e test.lt)
