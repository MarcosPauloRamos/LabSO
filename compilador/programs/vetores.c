int vet[ 10 ];

int valor(int vector[], int index, int a){
    vector[index] = a;
    return vector[index];
}

void main(void)
{
	int a;
    a = 50;
    output(valor(vet, 5, a));
}
