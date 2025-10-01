//Convert time entered in hh,min and sec into total seconds.

void main()
{
	int hr = 2, min = 30, sec = 20;
	int total_sec;

    total_sec = hr * 3600 + min * 60 + sec;

   	printf("%d:%d:%d\n", hr, min, sec);
    printf("total_sec  = %d\n", total_sec);
}