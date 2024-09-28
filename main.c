#include <stdio.h>
#include <string.h>
int main() {
    char titre[30][30];
    char auteur[30][30];
    double prix[20];
    int quantite[20];
    char recherche[30];
    int choix;
    int i=0,j=0,r,nblivre;
    do {
        printf("\nSystème de Gestion de Stock - Librairie\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre\n");
        printf("4. Mettre à jour la quantité d'un livre\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le nombre total de livres en stock\n");
        printf("7. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        switch (choix) {
            case 1:
             printf("entrer le titre : ");
             scanf("%s",&titre[r]);
             printf("entrer l'auteur : ");
             scanf("%s",&auteur[r]);
             printf("entrer le prix : ");
             scanf("%lf",&prix[r]);
             printf("entrer le quantite : ");
             scanf("%d",&quantite[r]);
           r++;
                break;
            case 2:
              printf(" \n La liste des livres est : \n");
                   for(i=0;i<r;i++){
                       printf("livre %d :\n",i+1);
                    printf("le titre est : %s / ",titre[i]);
                    printf("l'auteur est : %s / ",auteur[i]);
                    printf("le prix est %.0lf / ",prix[i]);
                    printf("la quantite est :%d \n",quantite[i]);

                }

                break;

            case 3:
                printf("Entrer le titre du livre que vous voulez rechercher : ");
                scanf("%s", recherche);
                int trouve1=0;

                for (i = 0; i < r; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        printf("Le livre est disponible.\n");
                        printf("Titre : %s\n", titre[i]);
                        printf("Auteur : %s\n", auteur[i]);
                        printf("Prix : %.2lf\n", prix[i]);
                        printf("Quantité en stock : %d\n", quantite[i]);
                        trouve1 = 1;
                        break;
                    }
                }

                if (!trouve1) {
                    printf("Le livre n'est pas disponible.\n");
                }
                break;
            case 4:
                 printf("Entrer le titre du livre dont vous voulez mettre à jour la quantité : ");
                 scanf("%s", recherche);
                 int trouve2=0;


                for (i = 0; i < r; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        printf("Le livre \"%s\" a actuellement une quantité de %d.\n", titre[i], quantite[i]);
                        printf("Entrer la nouvelle quantité : ");
                        scanf("%d", &quantite[i]);
                        printf("Quantité mise à jour avec succès.\n");
                        trouve2 = 1;
                        break;
                    }
                }

                if (!trouve2) {
                    printf("Le livre \"%s\" n'a pas été trouvé.\n", recherche);
                }

                break;

            case 5:
                printf("Entrer le titre du livre que vous voulez supprimer : ");
                scanf("%s", recherche);

                int trouve3 = 0;

                for (i = 0; i < r; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        trouve3 = 1;
                        strcpy(titre[i], titre[r - 1]);
                        strcpy(auteur[i], auteur[r - 1]);
                        prix[i] = prix[r - 1];
                        quantite[i] = quantite[r - 1];
                        r--;

                        printf("Le livre \"%s\" a été supprimé avec succès.\n", recherche);
                        break;
                    }
                }

                if (!trouve3) {
                    printf("Le livre \"%s\" n'a pas été trouvé.\n", recherche);
                }

                break;

            case 6:
                nblivre = 0;
                for (i = 0; i < r; i++) {
                    nblivre += quantite[i];
                }
                printf("Le nombre total de livres en stock est : %d\n", nblivre);
                break;

            case 7:
                printf("Au revoir!\n");
                break;

            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    }while (choix != 7);

    return 0;
}
