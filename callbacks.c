#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "reclamation.h"
#include "support.h"

void
on_afficher_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *window1;
GtkWidget *treeview1;
window1=lookup_widget(objet,"window1");
/// gtk_widget_destroy(window1);
///window1=lookup_widget(objet,"window1");
//window1=create_window1();
gtk_widget_show(window1);
treeview1=lookup_widget(window1,"treeview1");
afficher_client(treeview1);
}
                                  



void
on_ajouter_clicked                     (GtkWidget        *objet,
                                        gpointer         user_data)
{

GtkWidget *window1;
GtkWidget *window3;
//reclamation S;
//GtkWidget *treeview1;
window1=lookup_widget(objet,"window1");
gtk_widget_destroy(window1);
window3=lookup_widget(objet,"window3");
window3=create_window3();
gtk_widget_show(window3);
//treeview1=lookup_widget(window1,"treeview1");
//afficher_personne(treeview1);
//enregistrer_reclamation (S);


/*
GtkWidget *window1;
GtkWidget *window2;
reclamation S;
//GtkWidget *treeview1;
window2=lookup_widget(objet,"window2");
gtk_widget_destroy(window1);
//window2=lookup_widget(objet,"window2");
window2=create_window2();
gtk_widget_show(window2);
//treeview1=lookup_widget(window1,"treeview1");
//afficher_personne(treeview1);
//enregistrer_reclamation (S);*/

}


void
on_supprimer_clicked                   (GtkWidget        *objet,
                                        gpointer         user_data)
{
GtkWidget *window7;
GtkWidget *window1;

window1=lookup_widget(objet,"window1");
window7=lookup_widget(objet,"window7");
window7=create_window7();
gtk_widget_show(window7);
char Z[20];
char Z1[20];
int w=G;
GtkWidget *entry1;
GtkWidget *entry2;
if(w==2){
window1=lookup_widget(objet,"window1");
entry1=lookup_widget(objet,"entry1");
strcpy(Z,gtk_entry_get_text(GTK_ENTRY(entry1)));
entry2=lookup_widget(objet,"entry2");
strcpy(Z1,gtk_entry_get_text(GTK_ENTRY(entry2)));
supprimer_reclamation(Z,Z1);}
else 
window1=lookup_widget(objet,"window1");
}

void on_Enregistrer_clicked                 (GtkWidget      *objet,
                                        gpointer         user_data)
{

reclamation R;
GtkWidget *input;
GtkWidget *window2;
GtkWidget *sortie;
window2=lookup_widget(objet, "window2");
input =lookup_widget(objet,"input1");
strcpy (R.rec_text,gtk_entry_get_text(GTK_ENTRY(input)));
enregistrer_reclamation (R);

sortie=lookup_widget(objet, "label26");
gtk_label_set_text(GTK_LABEL(sortie),"message enregistrer");
}


void
on_Annuler_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window6;
//reclamation S;
//GtkWidget *treeview1;
window2=lookup_widget(objet,"window2");
gtk_widget_destroy(window2);
window6=lookup_widget(objet,"window6");
window6=create_window6();
gtk_widget_show(window6);

/*GtkWidget *window1, *window2;
window2=lookup_widget(objet,"window2");
gtk_widget_destroy(window2);
gtk_widget_show(window1);*/
}
int
on_radiobutton1_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
Y=1;
return Y;
}

int
on_radiobutton2_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
Y=2;
return Y;
}


int
on_radiobutton3_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
Y=3;
return Y;
}



void
on_quitter_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
gtk_main_quit ();
}


void
on_retour_clicked                      (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *window3;
GtkWidget *window1;
//reclamation S;
//GtkWidget *treeview1;
window3=lookup_widget(objet,"window3");
gtk_widget_destroy(window3);
window1=lookup_widget(objet,"window1");
window1=create_window1();
gtk_widget_show(window1);

/*GtkWidget *window1, *window3;
window3=lookup_widget(objet,"window3");
gtk_widget_destroy(window3);
gtk_widget_show(window1);*/

}


void
on_Enregistrer2_clicked                (GtkWidget      *objet,
                                        gpointer         user_data)
{
reclamation R;
GtkWidget *input;
GtkWidget *window2;
GtkWidget *sortie2;
window2=lookup_widget(objet, "window3");
input =lookup_widget(objet,"input2");
strcpy (R.rec_text,gtk_entry_get_text(GTK_ENTRY(input)));
enregistrer_reclamation (R);

sortie2=lookup_widget(objet, "label40");
gtk_label_set_text(GTK_LABEL(sortie2),"Reponse ajouter");
}


void
on_selectionne_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
char Z[20];
char Z1[20];
//int D;

GtkWidget *entry1;
GtkWidget *entry2;
GtkWidget *window1;
GtkWidget *treeview1;
window1=lookup_widget(objet,"window1");

entry1=lookup_widget(objet,"entry1");
strcpy(Z,gtk_entry_get_text(GTK_ENTRY(entry1)));

entry2=lookup_widget(objet,"entry2");
strcpy(Z1,gtk_entry_get_text(GTK_ENTRY(entry2)));

treeview1=lookup_widget(window1,"treeview1");
selectionner_reclamation(Z,Z1,treeview1);
afficher2_client(treeview1);

}


void
on_modifier_clicked                    (GtkWidget      *objet,
                                        gpointer         user_data)
{

}


void
on_client_clicked                      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window4;
GtkWidget *window5;
//reclamation S;
//GtkWidget *treeview1;
window4=lookup_widget(objet,"window4");
gtk_widget_destroy(window4);
window5=lookup_widget(objet,"window5");
window5=create_window5();
gtk_widget_show(window5);

}


void
on_admin_clicked                       (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window4;
GtkWidget *window1;
//reclamation S;
//GtkWidget *treeview1;
window4=lookup_widget(objet,"window4");
gtk_widget_destroy(window4);
window1=lookup_widget(objet,"window1");
window1=create_window1();
gtk_widget_show(window1);

}


void
on_Reclamation_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window5;
GtkWidget *window6;
//reclamation S;
//GtkWidget *treeview1;
window5=lookup_widget(objet,"window5");
gtk_widget_destroy(window5);
window6=lookup_widget(objet,"window6");
window6=create_window6();
gtk_widget_show(window6);
}


void
on_ajouter6_clicked                    (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window6;
GtkWidget *window2;
reclamation S;
//GtkWidget *treeview1;
window6=lookup_widget(objet,"window6");
gtk_widget_destroy(window6);
window2=lookup_widget(objet,"window2");
window2=create_window2();
gtk_widget_show(window2);
//treeview1=lookup_widget(window1,"treeview1");
//afficher_personne(treeview1);
//enregistrer_reclamation (S);

}


void
on_afiicher6_clicked                   (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window6;
GtkWidget *treeview2;
window6=lookup_widget(objet,"window6");
/// gtk_widget_destroy(window1);
///window1=lookup_widget(objet,"window1");
//window1=create_window1();
gtk_widget_show(window6);
treeview2=lookup_widget(window6,"treeview2");
afficher_reclamation(treeview2);
}


void
on_retour6_clicked                     (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window6;
GtkWidget *window5;
//reclamation S;
//GtkWidget *treeview1;
window6=lookup_widget(objet,"window6");
gtk_widget_destroy(window6);
window5=lookup_widget(objet,"window5");
window5=create_window5();
gtk_widget_show(window5);
}


void
on_quitter5_clicked                    (GtkWidget      *objet,
                                        gpointer         user_data)
{
gtk_main_quit ();
}


int
on_oui_clicked                         (GtkWidget       *objet,    
                                        gpointer         user_data)
{
GtkWidget *window7;
G=1;
window7=lookup_widget(objet,"window7");
gtk_widget_destroy(window7);
return G;
}


int
on_non_clicked                         (GtkWidget       *objet,
                                       gpointer         user_data)
{
GtkWidget *window7;
GtkWidget *window1;
window7=lookup_widget(objet,"window7");
gtk_widget_destroy(window7);
G=2;
return G;
}

