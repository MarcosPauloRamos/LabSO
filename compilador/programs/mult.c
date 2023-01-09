int mult(int n, int m){
    int c; 
    int fn; 	
    c = 1;	
    fn = 0;	
    while(c < m){
        int aux;		
        fn = fn + n;	
        c = c + 1;	
    }	
    return fn;
}

void main(void){	
    output(mult(5,6));
}
