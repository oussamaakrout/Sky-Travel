/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window_gestion_voiture (void)
{
  GtkWidget *window_gestion_voiture;
  GtkWidget *fixed1;
  GtkWidget *treeview1;
  GtkWidget *button3;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label3;
  GtkWidget *button1;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label1;
  GtkWidget *supprimer2;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label13;

  window_gestion_voiture = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window_gestion_voiture), _("window_gestion_voiture"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window_gestion_voiture), fixed1);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed1), treeview1, 104, 8);
  gtk_widget_set_size_request (treeview1, 544, 224);

  button3 = gtk_button_new ();
  gtk_widget_show (button3);
  gtk_fixed_put (GTK_FIXED (fixed1), button3, 376, 344);
  gtk_widget_set_size_request (button3, 192, 48);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (button3), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label3 = gtk_label_new_with_mnemonic (_("modifier"));
  gtk_widget_show (label3);
  gtk_box_pack_start (GTK_BOX (hbox3), label3, FALSE, FALSE, 0);

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed1), button1, 144, 344);
  gtk_widget_set_size_request (button1, 184, 48);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button1), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label1 = gtk_label_new_with_mnemonic (_("ajouter"));
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (hbox1), label1, FALSE, FALSE, 0);

  supprimer2 = gtk_button_new ();
  gtk_widget_show (supprimer2);
  gtk_fixed_put (GTK_FIXED (fixed1), supprimer2, 272, 408);
  gtk_widget_set_size_request (supprimer2, 184, 45);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (supprimer2), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label13 = gtk_label_new_with_mnemonic (_("supprimer"));
  gtk_widget_show (label13);
  gtk_box_pack_start (GTK_BOX (hbox6), label13, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) button3, "clicked",
                    G_CALLBACK (on_modifier_clicked),
                    NULL);
  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_ajouter_clicked),
                    NULL);
  g_signal_connect ((gpointer) supprimer2, "clicked",
                    G_CALLBACK (on_supprimer2_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window_gestion_voiture, window_gestion_voiture, "window_gestion_voiture");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, button3, "button3");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, image3, "image3");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, label3, "label3");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, button1, "button1");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, image1, "image1");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, label1, "label1");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, supprimer2, "supprimer2");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, image6, "image6");
  GLADE_HOOKUP_OBJECT (window_gestion_voiture, label13, "label13");

  return window_gestion_voiture;
}

GtkWidget*
create_window_ajouter_voiture (void)
{
  GtkWidget *window_ajouter_voiture;
  GtkWidget *fixed2;
  GtkWidget *entry_marque_voiture;
  GtkWidget *entry_modele_voiture;
  GtkWidget *entry_boite_vitesse;
  GtkWidget *entry_carburant;
  GtkWidget *entry_couleur;
  GtkWidget *entry_accessoire;
  GtkWidget *couleur;
  GtkWidget *carburant;
  GtkWidget *boite_vitesse;
  GtkWidget *modele_voiture;
  GtkWidget *marque_voiture;
  GtkWidget *entry_matricule;
  GtkWidget *accessoire;
  GtkWidget *matricule;
  GtkWidget *ajouter1;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label10;

  window_ajouter_voiture = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window_ajouter_voiture), _("window_ajouter_voiture"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (window_ajouter_voiture), fixed2);

  entry_marque_voiture = gtk_entry_new ();
  gtk_widget_show (entry_marque_voiture);
  gtk_fixed_put (GTK_FIXED (fixed2), entry_marque_voiture, 224, 128);
  gtk_widget_set_size_request (entry_marque_voiture, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_marque_voiture), 8226);

  entry_modele_voiture = gtk_entry_new ();
  gtk_widget_show (entry_modele_voiture);
  gtk_fixed_put (GTK_FIXED (fixed2), entry_modele_voiture, 224, 176);
  gtk_widget_set_size_request (entry_modele_voiture, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_modele_voiture), 8226);

  entry_boite_vitesse = gtk_entry_new ();
  gtk_widget_show (entry_boite_vitesse);
  gtk_fixed_put (GTK_FIXED (fixed2), entry_boite_vitesse, 224, 224);
  gtk_widget_set_size_request (entry_boite_vitesse, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_boite_vitesse), 8226);

  entry_carburant = gtk_entry_new ();
  gtk_widget_show (entry_carburant);
  gtk_fixed_put (GTK_FIXED (fixed2), entry_carburant, 224, 272);
  gtk_widget_set_size_request (entry_carburant, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_carburant), 8226);

  entry_couleur = gtk_entry_new ();
  gtk_widget_show (entry_couleur);
  gtk_fixed_put (GTK_FIXED (fixed2), entry_couleur, 224, 320);
  gtk_widget_set_size_request (entry_couleur, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_couleur), 8226);

  entry_accessoire = gtk_entry_new ();
  gtk_widget_show (entry_accessoire);
  gtk_fixed_put (GTK_FIXED (fixed2), entry_accessoire, 224, 368);
  gtk_widget_set_size_request (entry_accessoire, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_accessoire), 8226);

  couleur = gtk_label_new (_("couleur"));
  gtk_widget_show (couleur);
  gtk_fixed_put (GTK_FIXED (fixed2), couleur, 104, 312);
  gtk_widget_set_size_request (couleur, 104, 25);

  carburant = gtk_label_new (_("carburant"));
  gtk_widget_show (carburant);
  gtk_fixed_put (GTK_FIXED (fixed2), carburant, 104, 264);
  gtk_widget_set_size_request (carburant, 112, 24);

  boite_vitesse = gtk_label_new (_("boite _vitesse"));
  gtk_widget_show (boite_vitesse);
  gtk_fixed_put (GTK_FIXED (fixed2), boite_vitesse, 96, 216);
  gtk_widget_set_size_request (boite_vitesse, 104, 25);

  modele_voiture = gtk_label_new (_("modele_ voiture"));
  gtk_widget_show (modele_voiture);
  gtk_fixed_put (GTK_FIXED (fixed2), modele_voiture, 88, 168);
  gtk_widget_set_size_request (modele_voiture, 112, 25);

  marque_voiture = gtk_label_new (_("marque_ voiture"));
  gtk_widget_show (marque_voiture);
  gtk_fixed_put (GTK_FIXED (fixed2), marque_voiture, 88, 120);
  gtk_widget_set_size_request (marque_voiture, 112, 25);

  entry_matricule = gtk_entry_new ();
  gtk_widget_show (entry_matricule);
  gtk_fixed_put (GTK_FIXED (fixed2), entry_matricule, 224, 408);
  gtk_widget_set_size_request (entry_matricule, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_matricule), 8226);

  accessoire = gtk_label_new (_("accessoire"));
  gtk_widget_show (accessoire);
  gtk_fixed_put (GTK_FIXED (fixed2), accessoire, 112, 360);
  gtk_widget_set_size_request (accessoire, 89, 24);

  matricule = gtk_label_new (_("matricuule"));
  gtk_widget_show (matricule);
  gtk_fixed_put (GTK_FIXED (fixed2), matricule, 112, 408);
  gtk_widget_set_size_request (matricule, 96, 25);

  ajouter1 = gtk_button_new ();
  gtk_widget_show (ajouter1);
  gtk_fixed_put (GTK_FIXED (fixed2), ajouter1, 376, 480);
  gtk_widget_set_size_request (ajouter1, 128, 40);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (ajouter1), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label10 = gtk_label_new_with_mnemonic (_("ajouter"));
  gtk_widget_show (label10);
  gtk_box_pack_start (GTK_BOX (hbox4), label10, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) ajouter1, "clicked",
                    G_CALLBACK (on_ajouter1_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window_ajouter_voiture, window_ajouter_voiture, "window_ajouter_voiture");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, entry_marque_voiture, "entry_marque_voiture");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, entry_modele_voiture, "entry_modele_voiture");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, entry_boite_vitesse, "entry_boite_vitesse");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, entry_carburant, "entry_carburant");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, entry_couleur, "entry_couleur");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, entry_accessoire, "entry_accessoire");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, couleur, "couleur");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, carburant, "carburant");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, boite_vitesse, "boite_vitesse");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, modele_voiture, "modele_voiture");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, marque_voiture, "marque_voiture");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, entry_matricule, "entry_matricule");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, accessoire, "accessoire");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, matricule, "matricule");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, ajouter1, "ajouter1");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, image4, "image4");
  GLADE_HOOKUP_OBJECT (window_ajouter_voiture, label10, "label10");

  return window_ajouter_voiture;
}

GtkWidget*
create_window_supprimer_voiture (void)
{
  GtkWidget *window_supprimer_voiture;
  GtkWidget *fixed3;
  GtkWidget *entry_supprimer;
  GtkWidget *label11;
  GtkWidget *supprimer1;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label12;

  window_supprimer_voiture = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window_supprimer_voiture), _("window_supprimer_voiture"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (window_supprimer_voiture), fixed3);

  entry_supprimer = gtk_entry_new ();
  gtk_widget_show (entry_supprimer);
  gtk_fixed_put (GTK_FIXED (fixed3), entry_supprimer, 104, 136);
  gtk_widget_set_size_request (entry_supprimer, 176, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry_supprimer), 8226);

  label11 = gtk_label_new (_("donner la matricule du voiture a supprimer:"));
  gtk_widget_show (label11);
  gtk_fixed_put (GTK_FIXED (fixed3), label11, 24, 48);
  gtk_widget_set_size_request (label11, 353, 57);

  supprimer1 = gtk_button_new ();
  gtk_widget_show (supprimer1);
  gtk_fixed_put (GTK_FIXED (fixed3), supprimer1, 112, 208);
  gtk_widget_set_size_request (supprimer1, 144, 37);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (supprimer1), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label12 = gtk_label_new_with_mnemonic (_("supprimer1"));
  gtk_widget_show (label12);
  gtk_box_pack_start (GTK_BOX (hbox5), label12, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) supprimer1, "clicked",
                    G_CALLBACK (on_supprimer1_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window_supprimer_voiture, window_supprimer_voiture, "window_supprimer_voiture");
  GLADE_HOOKUP_OBJECT (window_supprimer_voiture, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (window_supprimer_voiture, entry_supprimer, "entry_supprimer");
  GLADE_HOOKUP_OBJECT (window_supprimer_voiture, label11, "label11");
  GLADE_HOOKUP_OBJECT (window_supprimer_voiture, supprimer1, "supprimer1");
  GLADE_HOOKUP_OBJECT (window_supprimer_voiture, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (window_supprimer_voiture, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (window_supprimer_voiture, image5, "image5");
  GLADE_HOOKUP_OBJECT (window_supprimer_voiture, label12, "label12");

  return window_supprimer_voiture;
}

GtkWidget*
create_window_recherche_voiture (void)
{
  GtkWidget *window_recherche_voiture;
  GtkWidget *fixed4;
  GtkObject *jourd_adj;
  GtkWidget *jourd;
  GtkWidget *date_depart;
  GtkObject *moisd_adj;
  GtkWidget *moisd;
  GtkObject *anneed_adj;
  GtkWidget *anneed;
  GtkObject *jourr_adj;
  GtkWidget *jourr;
  GtkObject *moisr_adj;
  GtkWidget *moisr;
  GtkObject *anneer_adj;
  GtkWidget *anneer;
  GtkWidget *date_retour;
  GtkWidget *marque_voiture;
  GtkWidget *combobox_marque;
  GtkWidget *modele_voiture;
  GtkWidget *combobox_modele;
  GtkWidget *boite_vitesse;
  GtkWidget *combobox_boite_vitesse;
  GtkWidget *carburant;
  GtkWidget *combobox_carburant;
  GtkWidget *combobox_couleur;
  GtkWidget *couleur;
  GtkWidget *accessoire;
  GtkWidget *combobox6;
  GtkWidget *button_rechercher;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label22;

  window_recherche_voiture = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window_recherche_voiture), _("window_recherche_voiture"));

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (window_recherche_voiture), fixed4);

  jourd_adj = gtk_adjustment_new (1, 0, 31, 1, 10, 10);
  jourd = gtk_spin_button_new (GTK_ADJUSTMENT (jourd_adj), 1, 0);
  gtk_widget_show (jourd);
  gtk_fixed_put (GTK_FIXED (fixed4), jourd, 160, 64);
  gtk_widget_set_size_request (jourd, 60, 27);

  date_depart = gtk_label_new (_("date_depart"));
  gtk_widget_show (date_depart);
  gtk_fixed_put (GTK_FIXED (fixed4), date_depart, 40, 64);
  gtk_widget_set_size_request (date_depart, 112, 25);

  moisd_adj = gtk_adjustment_new (1, 0, 12, 1, 10, 10);
  moisd = gtk_spin_button_new (GTK_ADJUSTMENT (moisd_adj), 1, 0);
  gtk_widget_show (moisd);
  gtk_fixed_put (GTK_FIXED (fixed4), moisd, 216, 64);
  gtk_widget_set_size_request (moisd, 60, 27);

  anneed_adj = gtk_adjustment_new (1, 2019, 2025, 1, 10, 10);
  anneed = gtk_spin_button_new (GTK_ADJUSTMENT (anneed_adj), 1, 0);
  gtk_widget_show (anneed);
  gtk_fixed_put (GTK_FIXED (fixed4), anneed, 272, 64);
  gtk_widget_set_size_request (anneed, 60, 27);

  jourr_adj = gtk_adjustment_new (1, 0, 31, 1, 10, 10);
  jourr = gtk_spin_button_new (GTK_ADJUSTMENT (jourr_adj), 1, 0);
  gtk_widget_show (jourr);
  gtk_fixed_put (GTK_FIXED (fixed4), jourr, 160, 104);
  gtk_widget_set_size_request (jourr, 60, 27);

  moisr_adj = gtk_adjustment_new (1, 0, 12, 1, 10, 10);
  moisr = gtk_spin_button_new (GTK_ADJUSTMENT (moisr_adj), 1, 0);
  gtk_widget_show (moisr);
  gtk_fixed_put (GTK_FIXED (fixed4), moisr, 216, 104);
  gtk_widget_set_size_request (moisr, 60, 27);

  anneer_adj = gtk_adjustment_new (1, 2019, 2025, 1, 10, 10);
  anneer = gtk_spin_button_new (GTK_ADJUSTMENT (anneer_adj), 1, 0);
  gtk_widget_show (anneer);
  gtk_fixed_put (GTK_FIXED (fixed4), anneer, 272, 104);
  gtk_widget_set_size_request (anneer, 60, 27);

  date_retour = gtk_label_new (_("date_retour"));
  gtk_widget_show (date_retour);
  gtk_fixed_put (GTK_FIXED (fixed4), date_retour, 32, 104);
  gtk_widget_set_size_request (date_retour, 120, 25);

  marque_voiture = gtk_label_new (_("marque_voiture"));
  gtk_widget_show (marque_voiture);
  gtk_fixed_put (GTK_FIXED (fixed4), marque_voiture, 32, 144);
  gtk_widget_set_size_request (marque_voiture, 120, 25);

  combobox_marque = gtk_combo_box_new_text ();
  gtk_widget_show (combobox_marque);
  gtk_fixed_put (GTK_FIXED (fixed4), combobox_marque, 160, 144);
  gtk_widget_set_size_request (combobox_marque, 184, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox_marque), _("  "));

  modele_voiture = gtk_label_new (_("modele_voiture"));
  gtk_widget_show (modele_voiture);
  gtk_fixed_put (GTK_FIXED (fixed4), modele_voiture, 32, 192);
  gtk_widget_set_size_request (modele_voiture, 112, 25);

  combobox_modele = gtk_combo_box_new_text ();
  gtk_widget_show (combobox_modele);
  gtk_fixed_put (GTK_FIXED (fixed4), combobox_modele, 160, 192);
  gtk_widget_set_size_request (combobox_modele, 184, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox_modele), _("  "));

  boite_vitesse = gtk_label_new (_("boite_vitesse"));
  gtk_widget_show (boite_vitesse);
  gtk_fixed_put (GTK_FIXED (fixed4), boite_vitesse, 24, 232);
  gtk_widget_set_size_request (boite_vitesse, 128, 25);

  combobox_boite_vitesse = gtk_combo_box_new_text ();
  gtk_widget_show (combobox_boite_vitesse);
  gtk_fixed_put (GTK_FIXED (fixed4), combobox_boite_vitesse, 160, 232);
  gtk_widget_set_size_request (combobox_boite_vitesse, 184, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox_boite_vitesse), _(" "));

  carburant = gtk_label_new (_("carburant"));
  gtk_widget_show (carburant);
  gtk_fixed_put (GTK_FIXED (fixed4), carburant, 40, 280);
  gtk_widget_set_size_request (carburant, 112, 25);

  combobox_carburant = gtk_combo_box_new_text ();
  gtk_widget_show (combobox_carburant);
  gtk_fixed_put (GTK_FIXED (fixed4), combobox_carburant, 160, 280);
  gtk_widget_set_size_request (combobox_carburant, 184, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox_carburant), _(" "));

  combobox_couleur = gtk_combo_box_new_text ();
  gtk_widget_show (combobox_couleur);
  gtk_fixed_put (GTK_FIXED (fixed4), combobox_couleur, 160, 328);
  gtk_widget_set_size_request (combobox_couleur, 184, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox_couleur), _(" "));

  couleur = gtk_label_new (_("couleur"));
  gtk_widget_show (couleur);
  gtk_fixed_put (GTK_FIXED (fixed4), couleur, 56, 328);
  gtk_widget_set_size_request (couleur, 96, 25);

  accessoire = gtk_label_new (_("accessoire"));
  gtk_widget_show (accessoire);
  gtk_fixed_put (GTK_FIXED (fixed4), accessoire, 40, 376);
  gtk_widget_set_size_request (accessoire, 104, 25);

  combobox6 = gtk_combo_box_new_text ();
  gtk_widget_show (combobox6);
  gtk_fixed_put (GTK_FIXED (fixed4), combobox6, 160, 376);
  gtk_widget_set_size_request (combobox6, 184, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox6), _(" "));

  button_rechercher = gtk_button_new ();
  gtk_widget_show (button_rechercher);
  gtk_fixed_put (GTK_FIXED (fixed4), button_rechercher, 360, 440);
  gtk_widget_set_size_request (button_rechercher, 128, 37);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (button_rechercher), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label22 = gtk_label_new_with_mnemonic (_("rechercher"));
  gtk_widget_show (label22);
  gtk_box_pack_start (GTK_BOX (hbox7), label22, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) button_rechercher, "clicked",
                    G_CALLBACK (on_button_rechercher_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window_recherche_voiture, window_recherche_voiture, "window_recherche_voiture");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, jourd, "jourd");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, date_depart, "date_depart");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, moisd, "moisd");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, anneed, "anneed");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, jourr, "jourr");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, moisr, "moisr");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, anneer, "anneer");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, date_retour, "date_retour");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, marque_voiture, "marque_voiture");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, combobox_marque, "combobox_marque");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, modele_voiture, "modele_voiture");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, combobox_modele, "combobox_modele");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, boite_vitesse, "boite_vitesse");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, combobox_boite_vitesse, "combobox_boite_vitesse");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, carburant, "carburant");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, combobox_carburant, "combobox_carburant");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, combobox_couleur, "combobox_couleur");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, couleur, "couleur");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, accessoire, "accessoire");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, combobox6, "combobox6");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, button_rechercher, "button_rechercher");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, image7, "image7");
  GLADE_HOOKUP_OBJECT (window_recherche_voiture, label22, "label22");

  return window_recherche_voiture;
}
