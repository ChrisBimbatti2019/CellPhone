#include<stdio.h>

int main()
{
    int m,n,op,opera;
    float cred=0,credsec=0;
    float min,sms;

    printf("CELULAR VIRTUAL:\n\n");

    while(op != 5)
    {   system("cls");
        printf("+------------------------+\n");
        printf("|        IPHONE X        |\n");
        printf("+------------------------+\n");
        printf("|1 - ADICIONAR CREDITO.  |\n");
        printf("|2 - FAZER UMA LIGACAO.  |\n");
        printf("|3 - MENSSAGEM DE TEXTO. |\n");
        printf("|4 - CONSULTAR CREDITO.  |\n");
        printf("|5 - DESLIGAR O TELEFONE.|\n");
        printf("+------------------------+\n");
        printf("\n: ");
        scanf("%d",&op);

        switch(op)
        {
            case 1: if(cred <= 0)
                    {
                        printf("\nVALORES DISPONIVEIS PARA INSERCAO:\n");
                        printf("10 REAIS\n");
                        printf("20 REAIS\n");
                        printf("30 REAIS\n");
                        printf("40 REAIS\n");
                        printf("50 REAIS\n");
                        printf(": ");
                        scanf("%f",&cred);
                    }
                    else
                    {
                        printf("\nVALORES DISPONIVEIS PARA INSERCAO:\n");
                        printf("10 REAIS\n");
                        printf("20 REAIS\n");
                        printf("30 REAIS\n");
                        printf("40 REAIS\n");
                        printf("50 REAIS\n");
                        printf(": ");
                        scanf("%f",&credsec);
                        cred = cred + credsec;
                    }

                    system("pause");
                    break;

            case 2: if(cred < 1)
                    {
                        printf("\nSALDO INSUFICIENTE.\n\n");
                        system("pause");
                        break;
                    }
                    min = 0;
                    printf("|\nAO FAZER UMA LIGACAO, VOCE GASTARA 0.50 POR MINUTO.\n");
                    system("pause");
                    printf("QUANTOS MINUTOS PERMANECEU NA LIGACAO ?");
                    printf("\n: ");
                    scanf("%f",&min);
                    min = min * 0.50;
                    if(min > cred)
                    {
                        printf("\nVOCE NAO TEM CREDITO O SUFICIENTE PARA PROCESEGUIR\nCOM A OPERACAO DESEJADA.\n");
                        system("pause");
                        break;
                    }
                    cred = cred - min;
                    printf("\nO SEU CONSUMO FOI DE %0.2f REAIS\n",min);

                    system("pause");
                    break;

            case 3: if(cred <= 0)
                    {
                        printf("\nSALDO INSUFICIENTE.");
                        system("pause");
                        break;
                    }
                    sms = 0;

                    printf("\nPARA UTILIZAR SMS VOCE TERA DIFERENTES COBRANCAS DEPENDENDO\nDA OPERADOR QUE DESEJA ENVIAR");
                    printf("\n1- VIVO = 0.10");
                    printf("\n2- TIM = 0.20");
                    printf("\n3- CLARO = 0.30");
                    printf("\n4- OI = 0.40\n");
                    printf(": ");
                    scanf("%d",&opera);
                    system("PAUSE");
                    system("cls");

                    if(opera == 1)
                    {
                        printf("\nHELLO WELCOME THE VIVO:\n");
                        printf("QUANTAS MENSSAGENS VOCE ENVIOU: ");
                        scanf("%f",&sms);
                        sms = sms * 0.10;
                        if(sms > cred)
                        {
                            printf("\nVOCE NAO TEM CREDITO PARA ENVIAR A QUANTIDADE\nDE CREDITOS QUE VOCE DESEJA.\n");
                            system("pause");
                            break;
                        }
                        printf("\nTOTAL GASTO EM SMS: %0.2f\n",sms);
                    }
                    if(opera == 2)
                    {
                        printf("\nHELLO WELCOME THE TIM:\n");
                        printf("QUANTAS MENSSAGENS VOCE ENVIOU: ");
                        scanf("%f",&sms);
                        sms = sms * 0.20;
                        if(sms > cred)
                        {
                            printf("\nVOCE NAO TEM CREDITO PARA ENVIAR A QUANTIDADE\nDE CREDITOS QUE VOCE DESEJA.\n");
                            system("pause");
                            break;
                        }
                        printf("\nTOTAL GASTO EM SMS: %0.2f\n",sms);
                    }
                    if(opera == 3)
                    {
                        printf("\nHELLO WELCOME THE CLARO:\n");
                        printf("QUANTAS MENSSAGENS VOCE ENVIOU: ");
                        scanf("%f",&sms);
                        sms = sms * 0.30;
                        if(sms > cred)
                        {
                            printf("\nVOCE NAO TEM CREDITO PARA ENVIAR A QUANTIDADE\nDE CREDITOS QUE VOCE DESEJA.\n");
                            system("pause");
                            break;
                        }

                        printf("\nTOTAL GASTO EM SMS: %0.2f\n",sms);
                    }
                    if(opera == 4)
                    {
                        printf("\nHELLO WELCOME THE OI:\n");
                        printf("QUANTAS MENSSAGENS VOCE ENVIOU: ");
                        scanf("%f",&sms);
                        sms = sms * 0.40;
                        if(sms > cred)
                        {
                            printf("\nVOCE NAO TEM CREDITO PARA ENVIAR A QUANTIDADE\nDE CREDITOS QUE VOCE DESEJA.\n");
                            system("pause");
                            break;
                        }

                        printf("\nTOTAL GASTO EM SMS: %0.2f\n",sms);
                    }
                    cred = cred - sms;
                    printf("ok");
                    system("pause");
                    break;
            case 4:
                    printf("\nSr. O SEU SALDO ATUAL E DE |%0.2f|\n",cred);
                    system("pause");
                    break;

            case 5: printf("\nSEE YOU\n\n");
                    system("pause");
                    break;

            default: break;

        }
    }
}
