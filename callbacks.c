#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "voiture.h"



void
on_ajouter_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window_gestion_voiture;
GtkWidget *window_ajouter_voiture;

window_ajouter_voiture=lookup_widget(objet,"window_ajouter_voiture");
window_gestion_voiture=lookup_widget(objet,"window_gestion_voiture");

window_ajouter_voiture=create_window_ajouter_voiture();

gtk_widget_show(window_ajouter_voiture);
gtk_widget_destroy(window_gestion_voiture);


}


void
on_modifier_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{

}


void
on_ajouter1_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{voiture v;


GtkWidget *input1, *input2, *input3, *input4,*input5,*input6,*input7;
GtkWidget *window_ajouter_voiture;

window_ajouter_voiture=lookup_widget(objet,"window_ajouter_voiture");

input1=lookup_widget(objet,"entry_marque_voiture");
strcpy(v.marque,gtk_entry_get_text(GTK_ENTRY(input1)));

input2=lookup_widget(objet,"entry_modele_voiture");
strcpy(v.modele,gtk_entry_get_text(GTK_ENTRY(input2)));

input3=lookup_widget(objet,"entry_boite_vitesse");
strcpy(v.boite_vitesse,gtk_entry_get_text(GTK_ENTRY(input3)));



input4=lookup_widget(objet,"entry_carburant");
strcpy(v.carburant,gtk_entry_get_text(GTK_ENTRY(input4)));

input5=lookup_widget(objet,"entry_couleur");
strcpy(v.couleur,gtk_entry_get_text(GTK_ENTRY(input5)));

input6=lookup_widget(objet,"entry_accessoire");
strcpy(v.accessoire,gtk_entry_get_text(GTK_ENTRY(input6)));

input7=lookup_widget(objet,"entry_matricule");
strcpy(v.matricule,gtk_entry_get_text(GTK_ENTRY(input7)));



ajouter_voiture(v);


GtkWidget *window_gestion_voiture;
GtkWidget *treeview1;

window_gestion_voiture=lookup_widget(objet,"window_gestion_voiture");
window_gestion_voiture=create_window_gestion_voiture();
gtk_widget_show(window_gestion_voiture);

gtk_widget_destroy(window_ajouter_voiture);

treeview1=lookup_widget(window_gestion_voiture,"treeview1");
afficher_voiture(treeview1);

}






void
on_supprimer1_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *input1,*window_supprimer_voiture;
char s[30];

window_supprimer_voiture=lookup_widget(objet,"window_supprimer_voiture");

input1=lookup_widget(objet,"entry_supprimer");
strcpy(s,gtk_entry_get_text(GTK_ENTRY(input1)));
Supprimer_voiture( "voiture.txt",s);


GtkWidget *window_gestion_voiture;
GtkWidget *treeview1;



window_gestion_voiture=lookup_widget(objet,"window_gestion_voiture");
window_gestion_voiture=create_window_gestion_voiture();
gtk_widget_destroy(window_supprimer_voiture);
gtk_widget_show(window_gestion_voiture);

treeview1=lookup_widget(window_gestion_voiture,"treeview1");
afficher_voiture(treeview1);

}


void
on_supprimer2_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *win1;
GtkWidget *win2;

win2=lookup_widget(objet,"window_supprimer_voiture");
win1=lookup_widget(objet,"window_gestion_voiture");

win2=create_window_supprimer_voiture();

gtk_widget_show(win2);
gtk_widget_destroy(win1);


}


void
on_button_rechercher_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}

