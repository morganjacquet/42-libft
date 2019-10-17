int main() {
    
    int i;
    int * pointer = (int *) ft_calloc( 6, sizeof(int) );

    for ( i=0; i<12-1; i++ ) {
        pointer[i] = i;
    }

    for (i=0; i<5; i++ ) {
        printf( "%d ", pointer[i] );
    }
    printf( "\n" );

    free( pointer );

    return 0;
}