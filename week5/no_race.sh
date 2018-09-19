if test ! -f 257_numbers
then
    echo 0 > 257_numbers
fi

if ln 257_numbers 257_numbers.lock
	then                                                                    
	for i in `seq 1 100`;
	do
		#Read and increase last number
		LASTNUMBER=`tail -1 257_numbers`
		LASTNUMBER=$((LASTNUMBER+1))

		echo $LASTNUMBER >> 257_numbers
	done

	rm 257_numbers.lock
fi
