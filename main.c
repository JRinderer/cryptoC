#include <stdio.h>
#include <stdlib.h>


char *binConct(char *bin1, char *bin2, int length){
    int i;
    int j=0;
    int len = 0;


    for(i = i; bin2[j] != '\0' ; i++){ //bin2[j] != '\0'
        for(j =0; bin2[j] != '\0';++j,++i){
            bin1[i]=bin2[j];
        }
    }
    //bin1[i] = '\0';
    //printf("The new string is %s", bin1);
    i = i - 1;
    return(bin1);
}

char *hexConverter(char *hex, int length) {
    char *bin = (char *) malloc(length + 1);
    char *retBin =  (char *) malloc(length + 1);
    //char bin[length];
    //if (bin == NULL) {
      //  exit(1);
    //}
    char *binHldr;


    for (int i = 0; i <= length; ++i) {

        switch (hex[i]) {
            case '0':
                bin =  "0000";
                retBin = binConct(retBin, bin, length);
                break;
            case '1':
                bin = "0001";
                retBin = binConct(retBin, bin, length);
                break;

            case '2':
                bin =  "0010";
                retBin = binConct(retBin, bin, length);
                break;
            case '3':
                bin =  "0011";
                retBin = binConct(retBin, bin, length);
                break;
            case '4':
                bin =  "0100";
                retBin = binConct(retBin, bin, length);
                break;
            case '5':
                bin = "0101";
                retBin = binConct(retBin, bin, length);
                break;

            case '6':
                bin = "0110";
                retBin = binConct(retBin, bin, length);
                break;
            case '7':
                bin = "0111";
                retBin = binConct(retBin, bin, length);
                break;

            case '8':
                bin = "1000";
                retBin = binConct(retBin, bin, length);
                break;
            case '9':
                bin = "1001";
                retBin = binConct(retBin, bin, length);
                break;

            case 'A':
                bin = "1010";
                retBin = binConct(retBin, bin, length);
                break;
            case 'B':
                bin = "1011";
                retBin = binConct(retBin, bin, length);
                break;

            case 'C':
                bin = "1100";
                retBin = binConct(retBin, bin, length);
                break;


            case 'D':
                bin = "1101";
                retBin = binConct(retBin, bin, length);
                break;


            case 'E':
                bin = "1110";
                retBin = binConct(retBin, bin, length);
                break;
            case 'F':
                bin = "1111";
                retBin = binConct(retBin, bin, length);
                break;

        }
    }
    //*bin++="Test\n";
    retBin[length+1]='\0';
    return retBin;



}

void intToBind(int num, int len){
    int hex = num;//0x49276d206b696c6c;//696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d;
    //char test = '49';
    //long hex;
    //hex = (long)test;
    char *concBin =  (char *) malloc(len + 1);;
    unsigned bits = sizeof(int);
    unsigned bitMask = 1 << (bits -1);

    unsigned k = 0;

    for(k = 0; k != bits;k++){
        if(hex & (bitMask >> k)){
            printf("1");
        }else{
            printf("0");

        }
    }
}

void stringToDecimal(char *ch, int length){
    int cars=0;
    char *hexVal;
    int chars;
    for (int i = 0; i < length; i++) {

        if (ch[i] >= '0' && ch[i] <= '9')
            chars = ch[i] - '0';
        if (ch[i] >= 'A' && ch[i] <= 'F')
            chars = ch[i] - 'A' + 10;
        if (ch[i] >= 'a' && ch[i] <= 'f')
            chars = ch[i] - 'a' + 10;
        intToBind(chars, length);
    }
    /*while (*ch) {
        int byte = *ch++;
        if (byte >= '0' && byte <= '9')
            byte = ch - '0';
        if (ch >= 'A' && ch <= 'F')
            byte = ch - 'A' + 10;
        if (ch >= 'a' && ch <= 'f')
            byte = ch - 'a' + 10;
        intToBind(byte);
    }*/

}


int main() {
    //printf("Hello, World!\n");
    char _hex[] = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
    char *hexVal;
    int counter = 0;
    for (hexVal = _hex; *hexVal != '\0'; hexVal++) {
        counter = counter + 1;

    }
    stringToDecimal(_hex,counter);

    //printf("The size of the string is %d",counter);
    //char *binary;
    //binary = hexConverter(_hex, counter);
    //printf("The binary value is %s",binary);

    //==================================
    /*int hex = 4;//0x49276d206b696c6c;//696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d;
    //char test = '49';
    //long hex;
    //hex = (long)test;
    unsigned bits = sizeof(int);
    unsigned bitMask = 1 << (bits -1);

    unsigned k = 0;

    for(k = 0; k != bits;k++){
        if(hex & (bitMask >> k)){
            printf("1");
        }else{
            printf("0");

        }
    }*/

    //printf("END\n");





    return 0;
}

