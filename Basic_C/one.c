int printf(const char *, ...);

extern void company();

extern void main(){

	printf("In main before company\n");
	company();
	printf("In main after company\n");
}
