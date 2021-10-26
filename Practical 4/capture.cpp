void capture() 
{
	int *marks = new int[10];
	marks[9] = 0;
	delete[] marks; 
}

int main()
{
	capture();

	return 0;
}

//G_SLICE=always-malloc G_DEBUG=gc-friendly  valgrind -v --leak-check=full --num-callers=40 --log-file=valgrind.log $(which capture) 
