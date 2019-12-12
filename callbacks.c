#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "mes_devis_vol.h"


void
on_devis_hebergement_clicked           (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mes_devis;
GtkWidget *mes_devis_hebergement;
GtkWidget *treeview2;
mes_devis=lookup_widget(objet_graphique,"mes_devis");
	gtk_widget_destroy(mes_devis);
	mes_devis_hebergement=lookup_widget(objet_graphique,"mes_devis_hebergement");
	mes_devis_hebergement=create_mes_devis_hebergement();
	gtk_widget_show(mes_devis_hebergement);
treeview2=lookup_widget(mes_devis_hebergement,"treeview2");
afficher_mes_devis_hebergement(treeview2);

}


void
on_devis_vol_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mes_devis;
GtkWidget *mes_devis_vol;
GtkWidget *treeview1;
mes_devis=lookup_widget(objet_graphique,"mes_devis");
	gtk_widget_destroy(mes_devis);
	mes_devis_vol=lookup_widget(objet_graphique,"mes_devis_vol");
	mes_devis_vol=create_mes_devis_vol();
gtk_widget_set_size_request(mes_devis_vol, 828, 336);
gtk_window_set_resizable (GTK_WINDOW(mes_devis_vol), FALSE);	
gtk_widget_show(mes_devis_vol);

treeview1=lookup_widget(mes_devis_vol,"treeview1");
afficher_mes_devis_vol(treeview1);

}


void
on_devis_location_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mes_devis;
GtkWidget *mes_devis_location;
GtkWidget *treeview3;
mes_devis=lookup_widget(objet_graphique,"mes_devis");
	gtk_widget_destroy(mes_devis);
	mes_devis_location=lookup_widget(objet_graphique,"mes_devis_location");
	mes_devis_location=create_mes_devis_location();
	gtk_widget_show(mes_devis_location);
treeview3=lookup_widget(mes_devis_location,"treeview3");
afficher_mes_devis_location(treeview3);


}


void
on_retourdevol_clicked                 (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mes_devis;
GtkWidget *mes_devis_vol;
mes_devis_vol=lookup_widget(objet_graphique,"mes_devis_vol");
	gtk_widget_destroy(mes_devis_vol);
	mes_devis=lookup_widget(objet_graphique,"mes_devis");
	mes_devis=create_mes_devis();
	gtk_widget_show(mes_devis);

}


void
on_retourhebergement_clicked           (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mes_devis;
GtkWidget *mes_devis_hebergement;
mes_devis_hebergement=lookup_widget(objet_graphique,"mes_devis_hebergement");
	gtk_widget_destroy(mes_devis_hebergement);
	mes_devis=lookup_widget(objet_graphique,"mes_devis");
	mes_devis=create_mes_devis();
	gtk_widget_show(mes_devis);
}


void
on_retourlocation_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mes_devis;
GtkWidget *mes_devis_location;
mes_devis_location=lookup_widget(objet_graphique,"mes_devis_location");
	gtk_widget_destroy(mes_devis_location);
	mes_devis=lookup_widget(objet_graphique,"mes_devis");
	mes_devis=create_mes_devis();
	gtk_widget_show(mes_devis);

}




void
on_payer_clicked                       (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *sortie1;
GtkWidget *sortie2;
GtkWidget *fenetre_paiement;
GtkWidget *fenetre_validation;
char numero_carte[30];
char cvc_cod[30];
int l,l1;
input1=lookup_widget(objet_graphique,"num_carte");
input2=lookup_widget(objet_graphique,"cvc_code");

strcpy(numero_carte,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(cvc_cod,gtk_entry_get_text(GTK_ENTRY(input2)));
sortie1=lookup_widget(objet_graphique,"Attention");
sortie2=lookup_widget(objet_graphique,"Attention1");
l=strlen(numero_carte);
l1=strlen(cvc_cod);
if ((l!=12)&&(l1==0)){
	gtk_label_set_text(GTK_LABEL(sortie1),"Saisir un numero de carte valide");
	gtk_label_set_text(GTK_LABEL(sortie2),"Champ Obligatoire");}
else if ((l1!=3)&&(l==12)){
	gtk_label_set_text(GTK_LABEL(sortie1),"");
	gtk_label_set_text(GTK_LABEL(sortie2),"Saisir un code CVC valide");}
else {	
	fenetre_paiement=lookup_widget(objet_graphique,"fenetre_paiement");
	gtk_widget_destroy(fenetre_paiement);
	fenetre_validation=lookup_widget(objet_graphique,"fenetre_validation");
	fenetre_validation=create_fenetre_validation();
	gtk_widget_show(fenetre_validation);}
}


void
on_retourpayer_clicked                 (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *fenetre_paiement_vol;
GtkWidget *mes_devis_vol;
GtkWidget *treeview1;

GtkWidget *mes_devis_location;
fenetre_paiement_vol=lookup_widget(objet_graphique,"fenetre_paiement_vol");
	gtk_widget_destroy(fenetre_paiement_vol);




	mes_devis_vol=lookup_widget(objet_graphique,"mes_devis_vol");
	mes_devis_vol=create_mes_devis_vol();
	gtk_widget_show(mes_devis_vol);
treeview1=lookup_widget(mes_devis_vol,"treeview1");
afficher_mes_devis_vol(treeview1);
}




void
on_acceuil_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *acceuil_client;
GtkWidget *fenetre_validation;
fenetre_validation=lookup_widget(objet_graphique,"fenetre_validation");
	gtk_widget_destroy(fenetre_validation);
	acceuil_client=lookup_widget(objet_graphique,"acceuil_client");
	acceuil_client=create_acceuil_client();
	gtk_widget_show(acceuil_client);

}


void
on_payer_vol_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *fenetre_paiement_vol;
GtkWidget *mes_devis_vol;
mes_devis_vol=lookup_widget(objet_graphique,"mes_devis_vol");
	gtk_widget_destroy(mes_devis_vol);
	fenetre_paiement_vol=lookup_widget(objet_graphique,"fenetre_paiement_vol");
	fenetre_paiement_vol=create_fenetre_paiement_vol();
	gtk_widget_show(fenetre_paiement_vol);

}


void
on_supprimer_devis_hebergement_clicked (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mes_devis_hebergement;
GtkWidget *fenetre_entrer_n_d_h;
mes_devis_hebergement=lookup_widget(objet_graphique,"mes_devis_hebergement");
	gtk_widget_destroy(mes_devis_hebergement);
	fenetre_entrer_n_d_h=lookup_widget(objet_graphique,"fenetre_entrer_n_d_h");
	fenetre_entrer_n_d_h=create_fenetre_entrer_n_d_h();
	gtk_widget_show(fenetre_entrer_n_d_h);
}


void
on_payer_devis_location_clicked        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *fenetre_paiement_location;
GtkWidget *mes_devis_location;
mes_devis_location=lookup_widget(objet_graphique,"mes_devis_location");
	gtk_widget_destroy(mes_devis_location);
	fenetre_paiement_location=lookup_widget(objet_graphique,"fenetre_paiement_location");
	fenetre_paiement_location=create_fenetre_paiement_location();
	gtk_widget_show(fenetre_paiement_location);

}


void
on_supprimer_devis_vol_clicked         (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mes_devis_vol;
GtkWidget *fenetre_entrer_n_d_v;
mes_devis_vol=lookup_widget(objet_graphique,"mes_devis_vol");
	gtk_widget_destroy(mes_devis_vol);
	fenetre_entrer_n_d_v=lookup_widget(objet_graphique,"fenetre_entrer_n_d_v");
	fenetre_entrer_n_d_v=create_fenetre_entrer_n_d_v();
	gtk_widget_show(fenetre_entrer_n_d_v);


}





void
on_enregistrer_carte_clicked           (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *sortie1;
GtkWidget *sortie2;
GtkWidget *sortie3;
GtkWidget *fenetre_paiement_vol;
Carte c;
GtkWidget *Mois;
GtkWidget *Annee;
char numero_carte[30];
char cvc_cod[30];
int l,l1;

fenetre_paiement_vol=lookup_widget(objet_graphique,"fenetre_paiement_vol");

input1=lookup_widget(objet_graphique,"num_carte");
input2=lookup_widget(objet_graphique,"cvc_code");

strcpy(c.num,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(c.cvc,gtk_entry_get_text(GTK_ENTRY(input2)));
sortie1=lookup_widget(objet_graphique,"Attention");
sortie2=lookup_widget(objet_graphique,"Attention1");
sortie3=lookup_widget(objet_graphique,"Attention2");
l=strlen(c.num);
l1=strlen(c.cvc);
if ((l!=12)&&(l1==0)){
	gtk_label_set_text(GTK_LABEL(sortie1),"Saisir un numero de carte valide");
	gtk_label_set_text(GTK_LABEL(sortie2),"Champ Obligatoire");}
else if ((l1!=3)&&(l==12)){
	gtk_label_set_text(GTK_LABEL(sortie1),"");
	gtk_label_set_text(GTK_LABEL(sortie2),"Saisir un code CVC valide");}
else {gtk_label_set_text(GTK_LABEL(sortie1),"");
	gtk_label_set_text(GTK_LABEL(sortie2),"");
	
Mois=lookup_widget(objet_graphique, "spinmois");
Annee=lookup_widget(objet_graphique, "spinannee");

c.dateexp.mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (Mois));
c.dateexp.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (Annee));


ajouter_carte(c);


gtk_label_set_text(GTK_LABEL(sortie3),"Carte Enregistré avec Succés");}

}





void
on_monprofil_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *acceuil_client;
GtkWidget *mon_profile;
acceuil_client=lookup_widget(objet_graphique,"acceuil_client");
	gtk_widget_destroy(acceuil_client);
	mon_profile=lookup_widget(objet_graphique,"mon_profile");
	mon_profile=create_mon_profile();
	gtk_widget_show(mon_profile);
}


void
on_reser_voiture_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_reser_vol_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_reser_hebergement_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_mes_reclamation_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_mes_informations_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_messdevis_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mes_devis;
GtkWidget *mon_profile;
mon_profile=lookup_widget(objet_graphique,"mon_profile");
	gtk_widget_destroy(mon_profile);
	mes_devis=lookup_widget(objet_graphique,"mes_devis");
	mes_devis=create_mes_devis();
	gtk_widget_show(mes_devis);

}

void
on_retour_mesdevis_clicked             (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mes_devis;
GtkWidget *mon_profile;
mes_devis=lookup_widget(objet_graphique,"mes_devis");
	gtk_widget_destroy(mes_devis);
	mon_profile=lookup_widget(objet_graphique,"mon_profile");
	mon_profile=create_mon_profile();
	gtk_widget_show(mon_profile);

}


void
on_retour_mon_profile_clicked          (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *acceuil_client;
GtkWidget *mon_profile;
mon_profile=lookup_widget(objet_graphique,"mon_profile");
	gtk_widget_destroy(mon_profile);
	acceuil_client=lookup_widget(objet_graphique,"acceuil_client");
	acceuil_client=create_acceuil_client();
	gtk_widget_show(acceuil_client);

}


void
on_gestion_devis_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *gestion_devis_fact;
GtkWidget *acceuil_admin;
acceuil_admin=lookup_widget(objet_graphique,"acceuil_admin");
	gtk_widget_destroy(acceuil_admin);
	gestion_devis_fact=lookup_widget(objet_graphique,"gestion_devis_fact");
	gestion_devis_fact=create_gestion_devis_fact();
	gtk_widget_show(gestion_devis_fact);
}


void
on_gestion_service_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_gestion_reclamation_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_gestion_client_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_gestion_employee_clicked            (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_retour_p_hebergement_clicked        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *treeview2;
GtkWidget *fenetre_paiement_hebergement;
GtkWidget *mes_devis_hebergement;

fenetre_paiement_hebergement=lookup_widget(objet_graphique,"fenetre_paiement_hebergement");
	gtk_widget_destroy(fenetre_paiement_hebergement);

	mes_devis_hebergement=lookup_widget(objet_graphique,"mes_devis_hebergement");
	mes_devis_hebergement=create_mes_devis_hebergement();
	gtk_widget_show(mes_devis_hebergement);
treeview2=lookup_widget(mes_devis_hebergement,"treeview2");
afficher_mes_devis_hebergement(treeview2);

}


void
on_retour_p_location_clicked           (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *treeview3;
GtkWidget *fenetre_paiement_location;
GtkWidget *mes_devis_location;

fenetre_paiement_location=lookup_widget(objet_graphique,"fenetre_paiement_location");
	gtk_widget_destroy(fenetre_paiement_location);

	mes_devis_location=lookup_widget(objet_graphique,"mes_devis_location");
	mes_devis_location=create_mes_devis_location();
	gtk_widget_show(mes_devis_location);
treeview3=lookup_widget(mes_devis_location,"treeview3");
afficher_mes_devis_location(treeview3);

}


void
on_payer_hebergement_clicked           (GtkWidget        *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *sortie1;
GtkWidget *sortie2;
GtkWidget *fenetre_paiement_hebergement;
GtkWidget *fenetre_validation;
char numero_carte[30];
char cvc_cod[30];
int l,l1;
input1=lookup_widget(objet_graphique,"num_carte");
input2=lookup_widget(objet_graphique,"cvc_code");

strcpy(numero_carte,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(cvc_cod,gtk_entry_get_text(GTK_ENTRY(input2)));
sortie1=lookup_widget(objet_graphique,"Attention");
sortie2=lookup_widget(objet_graphique,"Attention1");
l=strlen(numero_carte);
l1=strlen(cvc_cod);
if ((l!=12)&&(l1==0)){
	gtk_label_set_text(GTK_LABEL(sortie1),"Saisir un numero de carte valide");
	gtk_label_set_text(GTK_LABEL(sortie2),"Champ Obligatoire");}
else if ((l1!=3)&&(l==12)){
	gtk_label_set_text(GTK_LABEL(sortie1),"");
	gtk_label_set_text(GTK_LABEL(sortie2),"Saisir un code CVC valide");}
else {	
	fenetre_paiement_hebergement=lookup_widget(objet_graphique,"fenetre_paiement_hebergement");
	gtk_widget_destroy(fenetre_paiement_hebergement);
	fenetre_validation=lookup_widget(objet_graphique,"fenetre_validation");
	fenetre_validation=create_fenetre_validation();
	gtk_widget_show(fenetre_validation);}
}


void
on_payer_location_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *sortie1;
GtkWidget *sortie2;
GtkWidget *fenetre_paiement_location;
GtkWidget *fenetre_validation;
char numero_carte[30];
char cvc_cod[30];
int l,l1;
input1=lookup_widget(objet_graphique,"num_carte");
input2=lookup_widget(objet_graphique,"cvc_code");

strcpy(numero_carte,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(cvc_cod,gtk_entry_get_text(GTK_ENTRY(input2)));
sortie1=lookup_widget(objet_graphique,"Attention");
sortie2=lookup_widget(objet_graphique,"Attention1");
l=strlen(numero_carte);
l1=strlen(cvc_cod);
if ((l!=12)&&(l1==0)){
	gtk_label_set_text(GTK_LABEL(sortie1),"Saisir un numero de carte valide");
	gtk_label_set_text(GTK_LABEL(sortie2),"Champ Obligatoire");}
else if ((l1!=3)&&(l==12)){
	gtk_label_set_text(GTK_LABEL(sortie1),"");
	gtk_label_set_text(GTK_LABEL(sortie2),"Saisir un code CVC valide");}
else {	
	fenetre_paiement_location=lookup_widget(objet_graphique,"fenetre_paiement_location");
	gtk_widget_destroy(fenetre_paiement_location);
	fenetre_validation=lookup_widget(objet_graphique,"fenetre_validation");
	fenetre_validation=create_fenetre_validation();
	gtk_widget_show(fenetre_validation);}
}


void
on_enregistrer_carte_hb_clicked        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *sortie1;
GtkWidget *sortie2;
GtkWidget *sortie3;
GtkWidget *fenetre_paiement_hebergement;
Carte c;
GtkWidget *Mois;
GtkWidget *Annee;
char numero_carte[30];
char cvc_cod[30];
int l,l1;

fenetre_paiement_hebergement=lookup_widget(objet_graphique,"fenetre_paiement_hebergement");

input1=lookup_widget(objet_graphique,"num_carte");
input2=lookup_widget(objet_graphique,"cvc_code");

strcpy(c.num,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(c.cvc,gtk_entry_get_text(GTK_ENTRY(input2)));
sortie1=lookup_widget(objet_graphique,"Attention");
sortie2=lookup_widget(objet_graphique,"Attention1");
sortie3=lookup_widget(objet_graphique,"Attention2");
l=strlen(c.num);
l1=strlen(c.cvc);
if ((l!=12)&&(l1==0)){
	gtk_label_set_text(GTK_LABEL(sortie1),"Saisir un numero de carte valide");
	gtk_label_set_text(GTK_LABEL(sortie2),"Champ Obligatoire");}
else if ((l1!=3)&&(l==12)){
	gtk_label_set_text(GTK_LABEL(sortie1),"");
	gtk_label_set_text(GTK_LABEL(sortie2),"Saisir un code CVC valide");}
else {gtk_label_set_text(GTK_LABEL(sortie1),"");
	gtk_label_set_text(GTK_LABEL(sortie2),"");
	
Mois=lookup_widget(objet_graphique, "spinmois");
Annee=lookup_widget(objet_graphique, "spinannee");

c.dateexp.mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (Mois));
c.dateexp.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (Annee));


ajouter_carte(c);


gtk_label_set_text(GTK_LABEL(sortie3),"Carte Enregistré avec Succés");}

}


void
on_enregistrer_carte_location_clicked  (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *sortie1;
GtkWidget *sortie2;
GtkWidget *sortie3;
GtkWidget *fenetre_paiement_location;
Carte c;
GtkWidget *Mois;
GtkWidget *Annee;
char numero_carte[30];
char cvc_cod[30];
int l,l1;

fenetre_paiement_location=lookup_widget(objet_graphique,"fenetre_paiement_location");

input1=lookup_widget(objet_graphique,"num_carte");
input2=lookup_widget(objet_graphique,"cvc_code");

strcpy(c.num,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(c.cvc,gtk_entry_get_text(GTK_ENTRY(input2)));
sortie1=lookup_widget(objet_graphique,"Attention");
sortie2=lookup_widget(objet_graphique,"Attention1");
sortie3=lookup_widget(objet_graphique,"Attention2");
l=strlen(c.num);
l1=strlen(c.cvc);
if ((l!=12)&&(l1==0)){
	gtk_label_set_text(GTK_LABEL(sortie1),"Saisir un numero de carte valide");
	gtk_label_set_text(GTK_LABEL(sortie2),"Champ Obligatoire");}
else if ((l1!=3)&&(l==12)){
	gtk_label_set_text(GTK_LABEL(sortie1),"");
	gtk_label_set_text(GTK_LABEL(sortie2),"Saisir un code CVC valide");}
else {gtk_label_set_text(GTK_LABEL(sortie1),"");
	gtk_label_set_text(GTK_LABEL(sortie2),"");
	
Mois=lookup_widget(objet_graphique, "spinmois");
Annee=lookup_widget(objet_graphique, "spinannee");

c.dateexp.mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (Mois));
c.dateexp.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (Annee));


ajouter_carte(c);


gtk_label_set_text(GTK_LABEL(sortie3),"Carte Enregistré avec Succés");}

}


void
on_payer_devis_hebergement_clicked     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *fenetre_paiement_hebergement;
GtkWidget *mes_devis_hebergement;
mes_devis_hebergement=lookup_widget(objet_graphique,"mes_devis_hebergement");
	gtk_widget_destroy(mes_devis_hebergement);
	fenetre_paiement_hebergement=lookup_widget(objet_graphique,"fenetre_paiement_hebergement");
	fenetre_paiement_hebergement=create_fenetre_paiement_hebergement();
	gtk_widget_show(fenetre_paiement_hebergement);

}


void
on_s_d_v_clicked                       (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mes_devis_vol;
GtkWidget *fenetre_entrer_n_d_v;
GtkWidget *input1;
GtkWidget *treeview1;
//GtkWidget *sortie1;
//FILE* f=fopen("devis_vol.txt","r");
char s[30];
//int z;
//int num_dev_vol;
fenetre_entrer_n_d_v=lookup_widget(objet_graphique,"fenetre_entrer_n_d_v");

input1=lookup_widget(objet_graphique,"n_d_v_s");

//sortie1=lookup_widget(objet_graphique,"control_s_n_d_v");

strcpy(s,gtk_entry_get_text(GTK_ENTRY(input1)));

//z=atoi(s);

//if(f!=NULL)
//{	while(fscanf(f,"%d \n",num_dev_vol)!=EOF)
//{if (z!=num_dev_vol)
	//gtk_label_set_text(GTK_LABEL(sortie1),"Saisir un numero de devis valide");
//else {
Supprimer_devis_vol("devis_vol.txt",s);
fenetre_entrer_n_d_v=lookup_widget(objet_graphique,"fenetre_entrer_n_d_v");
	gtk_widget_destroy(fenetre_entrer_n_d_v);
	mes_devis_vol=lookup_widget(objet_graphique,"mes_devis_vol");
	mes_devis_vol=create_mes_devis_vol();
	gtk_widget_show(mes_devis_vol);
treeview1=lookup_widget(mes_devis_vol,"treeview1");
afficher_mes_devis_vol(treeview1);
//}
//}
//fclose(f);
//}
}


void
on_s_d_h_clicked                       (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mes_devis_hebergement;
GtkWidget *fenetre_entrer_n_d_h;
GtkWidget *input1;
GtkWidget *treeview2;
char s[30];
fenetre_entrer_n_d_h=lookup_widget(objet_graphique,"fenetre_entrer_n_d_h");

input1=lookup_widget(objet_graphique,"n_d_h_s");
strcpy(s,gtk_entry_get_text(GTK_ENTRY(input1)));
Supprimer_devis_hebergement("devis_hebergement.txt",s);

fenetre_entrer_n_d_h=lookup_widget(objet_graphique,"fenetre_entrer_n_d_h");
	gtk_widget_destroy(fenetre_entrer_n_d_h);
	mes_devis_hebergement=lookup_widget(objet_graphique,"mes_devis_hebergement");
	mes_devis_hebergement=create_mes_devis_hebergement();
	gtk_widget_show(mes_devis_hebergement);

treeview2=lookup_widget(mes_devis_hebergement,"treeview2");
afficher_mes_devis_hebergement(treeview2);

}


void
on_s_d_l_clicked                       (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mes_devis_location;
GtkWidget *fenetre_entrer_n_d_l;
GtkWidget *input1;
GtkWidget *treeview3;
char s[30];
fenetre_entrer_n_d_l=lookup_widget(objet_graphique,"fenetre_entrer_n_d_l");

input1=lookup_widget(objet_graphique,"n_d_l_s");
strcpy(s,gtk_entry_get_text(GTK_ENTRY(input1)));
Supprimer_devis_location("devis_location.txt",s);

fenetre_entrer_n_d_l=lookup_widget(objet_graphique,"fenetre_entrer_n_d_l");
	gtk_widget_destroy(fenetre_entrer_n_d_l);
	mes_devis_location=lookup_widget(objet_graphique,"mes_devis_location");
	mes_devis_location=create_mes_devis_location();
	gtk_widget_show(mes_devis_location);

treeview3=lookup_widget(mes_devis_location,"treeview3");
afficher_mes_devis_location(treeview3);
}


void
on_supprimer_devis_location_clicked    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *mes_devis_location;
GtkWidget *fenetre_entrer_n_d_l;
mes_devis_location=lookup_widget(objet_graphique,"mes_devis_location");
	gtk_widget_destroy(mes_devis_location);
	fenetre_entrer_n_d_l=lookup_widget(objet_graphique,"fenetre_entrer_n_d_l");
	fenetre_entrer_n_d_l=create_fenetre_entrer_n_d_l();
	gtk_widget_show(fenetre_entrer_n_d_l);

}


void
on_g_d_v_clicked                       (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *gestion_devis_fact;
GtkWidget *gestion_devis_vol;
gestion_devis_fact=lookup_widget(objet_graphique,"gestion_devis_fact");
	gtk_widget_destroy(gestion_devis_fact);
	gestion_devis_vol=lookup_widget(objet_graphique,"gestion_devis_vol");
	gestion_devis_vol=create_gestion_devis_vol();
	gtk_widget_show(gestion_devis_vol);


}


void
on_g_d_h_clicked                       (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_g_d_l_clicked                       (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_retour_g_d_clicked                  (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *gestion_devis_fact;
GtkWidget *acceuil_admin;
gestion_devis_fact=lookup_widget(objet_graphique,"gestion_devis_fact");
	gtk_widget_destroy(gestion_devis_fact);
	acceuil_admin=lookup_widget(objet_graphique,"acceuil_admin");
	acceuil_admin=create_acceuil_admin();
	gtk_widget_show(acceuil_admin);

}


void
on_retour_g_d_vol_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *gestion_devis_fact;
GtkWidget *gestion_devis_vol;
gestion_devis_vol=lookup_widget(objet_graphique,"gestion_devis_vol");
	gtk_widget_destroy(gestion_devis_vol);
	gestion_devis_fact=lookup_widget(objet_graphique,"gestion_devis_fact");
	gestion_devis_fact=create_gestion_devis_fact();
	gtk_widget_show(gestion_devis_fact);

}


void
on_retour_g_d_h_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_retour_g_d_l_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}

