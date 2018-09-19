if test ! -f 257_numbers
then
    echo 0 > 257_numbers
fi

for i in `seq 1 100`;
do
	LASTNUMBER=`tail -1 257_numbers`
	LASTNUMBER=$((LASTNUMBER+1))

	echo $LASTNUMBER >> 257_numbers
done
