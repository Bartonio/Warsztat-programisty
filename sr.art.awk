BEGIN{
	sum=0
	count=0
	sr=0
	
	
	}
/[0-9]+/	{

	count++
	    sum+=$1
	sr=sum/count
	echo $sr

}

