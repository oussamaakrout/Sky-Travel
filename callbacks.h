#include <gtk/gtk.h>


void
on_afficher_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);


void
on_ajouter_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_supprimer_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_Enregistrer_clicked                 (GtkWidget      *objet,
                                        gpointer         user_data);
void
on_Annuler_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);


int
on_radiobutton1_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

int
on_radiobutton2_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

int
on_radiobutton3_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);


void
on_quitter_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_retour_clicked                      (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_Enregistrer2_clicked                (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_selectionne_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_modifier_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_client_clicked                      (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_admin_clicked                       (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_Reclamation_clicked                 (GtkWidget        *objet,
                                        gpointer         user_data);

void
on_ajouter6_clicked                    (GtkWidget        *objet,
                                        gpointer         user_data);

void
on_afiicher6_clicked                   (GtkWidget        *objet,
                                        gpointer         user_data);

void
on_retour6_clicked                     (GtkWidget        *objet,
                                        gpointer         user_data);

void
on_quitter5_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data);

int
on_oui_clicked                         (GtkWidget       *objet,
                                        gpointer         user_data);

int
on_non_clicked                         (GtkWidget       *objet,
                                        gpointer         user_data);
