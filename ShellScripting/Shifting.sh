if (( $#==0 ))
	then
	echo Pass atleast 1 parameter
	exit 1
fi

while (($#)) 
do
	#statements
	echo You Gave me $1
	shift
done