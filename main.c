#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float a, b, result;
    while (1) {
        printf("\n\nZvolte režim:\n");
        printf("1. Aritmeticke operace\n");
        printf("2. Goniometricke operace\n");
        printf("3. Konec programu\n\n");
        printf("Vaše volba: ");
        scanf("%d", &choice);

        if (choice == 3) {
            return 0;
        }

        switch (choice) {
            case 1:
                printf("Vyberte si aritmetickou operaci:\n");
                printf("--------------------------------\n");
                printf("1. Soucet\n");
                printf("2. Rozdil\n");
                printf("3. Soucin\n");
                printf("4. Podil\n");
                printf("5. Zbytek po deleni\n");
                printf("6. Absolutni hodnota\n");
                printf("7. N-ta mocnina\n");
                printf("8. N-ta odmocnina\n");
                printf("--------------------------------\n");
                printf("Vaše volba: ");
                scanf("%d", &choice);

                printf("Zadejte dve cisla (oddelena mezerou):\n");
                scanf("%f %f", &a, &b);
                switch (choice) {
                    case 1:
                        result = a + b;
                        break;
                    case 2:
                        result = a - b;
                        break;
                    case 3:
                        result = a * b;
                        break;
                    case 4:
                        result = a / b;
                        break;
                    case 5:
                        result = (int) a % (int) b;
                        break;
                    case 6:
                        result = fabs(a);
                        break;
                    case 7:
                        result = pow(a, b);
                        break;
                    case 8:
                        result = pow(a, 1 / b);
                        break;
                    default:
                        printf("Neplatna volba.\n");
                        return 0;
                }
                printf("Vysledek: %f", result);
                break;

            case 2:
                printf("Vyberte si goniometrickou operaci:\n");
                printf("----------------------------------\n");
                printf("1. Sinus\n");
                printf("2. Arkus sinus\n");
                printf("3. Kosinus\n");
                printf("4. Arkus kosinus\n");
                printf("5. Tangens\n");
                printf("6. Arkus tangens\n");
                printf("----------------------------------\n");
                printf("Vaše volba: ");
                scanf("%d", &choice);

                printf("Zadejte cislo:\n");
                scanf("%f", &a);
                switch (choice) {
                    case 1:
                        result = sin(a);
                        break;
                    case 2:
                        result = asin(a);
                        break;
                    case 3:
                        result = cos(a);
                        break;
                    case 4:
                        result = acos(a);
                        break;
                    case 5:
                        result = tan(a);
                        break;
                    case 6:
                        result = atan(a);
                        break;
                    default:
                        printf("Neplatna volba.\n");
                        return 0;
                }
                printf("Vysledek: %f", result);
                break;

            case 3:
                return 0;

            default:
                printf("Neplatna volba.\n");

        }
    }
}