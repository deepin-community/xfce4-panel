/* automatically generated from applicationsmenu-dialog.glade */
#ifdef __SUNPRO_C
#pragma align 4 (applicationsmenu_dialog_ui)
#endif
#ifdef __GNUC__
static const char applicationsmenu_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char applicationsmenu_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"3.20\"/><requires lib=\"libxfce4ui-2\" version=\"4.12\"/"
  "><object class=\"GtkImage\" id=\"image1\"><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">False</property><property nam"
  "e=\"icon_name\">alacarte</property></object><object class=\"GtkImage\" "
  "id=\"image2\"><property name=\"visible\">True</property><property name="
  "\"can_focus\">False</property><property name=\"icon_name\">help-browser"
  "</property></object><object class=\"GtkImage\" id=\"image3\"><property "
  "name=\"visible\">True</property><property name=\"can_focus\">False</pro"
  "perty><property name=\"icon_name\">window-close-symbolic</property></ob"
  "ject><object class=\"XfceTitledDialog\" id=\"dialog\"><property name=\""
  "can_focus\">False</property><property name=\"title\" translatable=\"yes"
  "\">Applications Menu</property><property name=\"icon_name\">org.xfce.pa"
  "nel.applicationsmenu</property><property name=\"type_hint\">normal</pro"
  "perty><child internal-child=\"vbox\"><object class=\"GtkBox\" id=\"dial"
  "og-vbox2\"><property name=\"visible\">True</property><property name=\"c"
  "an_focus\">False</property><property name=\"orientation\">vertical</pro"
  "perty><property name=\"spacing\">2</property><child internal-child=\"ac"
  "tion_area\"><object class=\"GtkButtonBox\" id=\"dialog-action_area2\"><"
  "property name=\"visible\">True</property><property name=\"can_focus\">F"
  "alse</property><property name=\"layout_style\">end</property><child><ob"
  "ject class=\"GtkButton\" id=\"help-button\"><property name=\"label\" tr"
  "anslatable=\"yes\">_Help</property><property name=\"visible\">True</pro"
  "perty><property name=\"can_focus\">True</property><property name=\"rece"
  "ives_default\">True</property><property name=\"image\">image2</property"
  "><property name=\"use_underline\">True</property></object><packing><pro"
  "perty name=\"expand\">False</property><property name=\"fill\">False</pr"
  "operty><property name=\"position\">0</property><property name=\"seconda"
  "ry\">True</property></packing></child><child><object class=\"GtkButton\""
  " id=\"close-button\"><property name=\"label\" translatable=\"yes\">_Clo"
  "se</property><property name=\"visible\">True</property><property name=\""
  "can_focus\">True</property><property name=\"receives_default\">True</pr"
  "operty><property name=\"image\">image3</property><property name=\"use_u"
  "nderline\">True</property></object><packing><property name=\"expand\">F"
  "alse</property><property name=\"fill\">False</property><property name=\""
  "position\">1</property></packing></child></object><packing><property na"
  "me=\"expand\">False</property><property name=\"fill\">False</property><"
  "property name=\"pack_type\">end</property><property name=\"position\">0"
  "</property></packing></child><child><object class=\"GtkBox\" id=\"vbox1"
  "\"><property name=\"visible\">True</property><property name=\"can_focus"
  "\">False</property><property name=\"border_width\">6</property><propert"
  "y name=\"orientation\">vertical</property><property name=\"spacing\">6<"
  "/property><child><object class=\"GtkFrame\" id=\"frame3\"><property nam"
  "e=\"visible\">True</property><property name=\"can_focus\">False</proper"
  "ty><property name=\"label_xalign\">0</property><property name=\"shadow_"
  "type\">none</property><child><object class=\"GtkGrid\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">False</property><"
  "property name=\"margin_left\">18</property><property name=\"row_spacing"
  "\">6</property><property name=\"column_spacing\">12</property><child><o"
  "bject class=\"GtkLabel\" id=\"label4\"><property name=\"visible\">True<"
  "/property><property name=\"can_focus\">False</property><property name=\""
  "label\" translatable=\"yes\">_Icon:</property><property name=\"use_unde"
  "rline\">True</property><property name=\"xalign\">0</property></object><"
  "packing><property name=\"left_attach\">0</property><property name=\"top"
  "_attach\">5</property></packing></child><child><object class=\"GtkEntry"
  "\" id=\"button-title\"><property name=\"visible\">True</property><prope"
  "rty name=\"can_focus\">True</property><property name=\"invisible_char\""
  ">\342\200\242</property></object><packing><property name=\"left_attach\""
  ">1</property><property name=\"top_attach\">4</property></packing></chil"
  "d><child><object class=\"GtkLabel\" id=\"label2\"><property name=\"visi"
  "ble\">True</property><property name=\"can_focus\">False</property><prop"
  "erty name=\"label\" translatable=\"yes\">Button _title:</property><prop"
  "erty name=\"use_underline\">True</property><property name=\"xalign\">0<"
  "/property></object><packing><property name=\"left_attach\">0</property>"
  "<property name=\"top_attach\">4</property></packing></child><child><obj"
  "ect class=\"GtkCheckButton\" id=\"show-button-title\"><property name=\""
  "label\" translatable=\"yes\">_Show button title</property><property nam"
  "e=\"visible\">True</property><property name=\"can_focus\">True</propert"
  "y><property name=\"receives_default\">False</property><property name=\""
  "use_underline\">True</property><property name=\"draw_indicator\">True</"
  "property></object><packing><property name=\"left_attach\">0</property><"
  "property name=\"top_attach\">3</property><property name=\"width\">2</pr"
  "operty></packing></child><child><object class=\"GtkCheckButton\" id=\"s"
  "how-tooltips\"><property name=\"label\" translatable=\"yes\">Show appli"
  "cation d_escription in tooltip</property><property name=\"visible\">Tru"
  "e</property><property name=\"can_focus\">True</property><property name="
  "\"receives_default\">False</property><property name=\"use_underline\">T"
  "rue</property><property name=\"image_position\">right</property><proper"
  "ty name=\"draw_indicator\">True</property></object><packing><property n"
  "ame=\"left_attach\">0</property><property name=\"top_attach\">2</proper"
  "ty><property name=\"width\">2</property></packing></child><child><objec"
  "t class=\"GtkCheckButton\" id=\"show-menu-icons\"><property name=\"labe"
  "l\" translatable=\"yes\">Show ic_ons in menu</property><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property><p"
  "roperty name=\"receives_default\">False</property><property name=\"use_"
  "underline\">True</property><property name=\"draw_indicator\">True</prop"
  "erty></object><packing><property name=\"left_attach\">0</property><prop"
  "erty name=\"top_attach\">1</property><property name=\"width\">2</proper"
  "ty></packing></child><child><object class=\"GtkCheckButton\" id=\"show-"
  "generic-names\"><property name=\"label\" translatable=\"yes\">Show gene"
  "ric application n_ames</property><property name=\"visible\">True</prope"
  "rty><property name=\"can_focus\">True</property><property name=\"receiv"
  "es_default\">False</property><property name=\"tooltip_text\" translatab"
  "le=\"yes\">Select this option to show the generic application name in t"
  "he menu, for example \"File Manager\" instead of \"Thunar\"</property><"
  "property name=\"use_underline\">True</property><property name=\"draw_in"
  "dicator\">True</property></object><packing><property name=\"left_attach"
  "\">0</property><property name=\"top_attach\">0</property><property name"
  "=\"width\">2</property></packing></child><child><object class=\"GtkButt"
  "on\" id=\"icon-button\"><property name=\"visible\">True</property><prop"
  "erty name=\"can_focus\">True</property><property name=\"receives_defaul"
  "t\">True</property><property name=\"halign\">start</property><child><pl"
  "aceholder/></child></object><packing><property name=\"left_attach\">1</"
  "property><property name=\"top_attach\">5</property></packing></child></"
  "object></child><child type=\"label\"><object class=\"GtkLabel\" id=\"la"
  "bel1\"><property name=\"visible\">True</property><property name=\"can_f"
  "ocus\">False</property><property name=\"label\" translatable=\"yes\">Ap"
  "pearance</property><attributes><attribute name=\"weight\" value=\"bold\""
  "/></attributes></object></child></object><packing><property name=\"expa"
  "nd\">False</property><property name=\"fill\">True</property><property n"
  "ame=\"position\">0</property></packing></child><child><object class=\"G"
  "tkFrame\" id=\"frame1\"><property name=\"visible\">True</property><prop"
  "erty name=\"can_focus\">False</property><property name=\"label_xalign\""
  ">0</property><property name=\"shadow_type\">none</property><child><obje"
  "ct class=\"GtkAlignment\" id=\"alignment1\"><property name=\"visible\">"
  "True</property><property name=\"can_focus\">False</property><property n"
  "ame=\"left_padding\">12</property><child><object class=\"GtkBox\" id=\""
  "vbox2\"><property name=\"visible\">True</property><property name=\"can_"
  "focus\">False</property><property name=\"border_width\">6</property><pr"
  "operty name=\"orientation\">vertical</property><property name=\"spacing"
  "\">6</property><child><object class=\"GtkBox\" id=\"hbox1\"><property n"
  "ame=\"visible\">True</property><property name=\"can_focus\">False</prop"
  "erty><property name=\"spacing\">12</property><child><object class=\"Gtk"
  "RadioButton\" id=\"use-default-menu\"><property name=\"label\" translat"
  "able=\"yes\">Use the _default menu</property><property name=\"visible\""
  ">True</property><property name=\"can_focus\">True</property><property n"
  "ame=\"receives_default\">False</property><property name=\"use_underline"
  "\">True</property><property name=\"draw_indicator\">True</property></ob"
  "ject><packing><property name=\"expand\">False</property><property name="
  "\"fill\">True</property><property name=\"position\">0</property></packi"
  "ng></child><child><object class=\"GtkButton\" id=\"edit-menu-button\"><"
  "property name=\"label\" translatable=\"yes\">Ed_it Menu</property><prop"
  "erty name=\"visible\">True</property><property name=\"can_focus\">True<"
  "/property><property name=\"receives_default\">True</property><property "
  "name=\"image\">image1</property><property name=\"use_underline\">True</"
  "property></object><packing><property name=\"expand\">False</property><p"
  "roperty name=\"fill\">True</property><property name=\"position\">1</pro"
  "perty></packing></child></object><packing><property name=\"expand\">Fal"
  "se</property><property name=\"fill\">True</property><property name=\"po"
  "sition\">0</property></packing></child><child><object class=\"GtkRadioB"
  "utton\" id=\"use-custom-menu\"><property name=\"label\" translatable=\""
  "yes\">Use c_ustom menu file:</property><property name=\"visible\">True<"
  "/property><property name=\"can_focus\">True</property><property name=\""
  "receives_default\">False</property><property name=\"use_underline\">Tru"
  "e</property><property name=\"active\">True</property><property name=\"d"
  "raw_indicator\">True</property><property name=\"group\">use-default-men"
  "u</property></object><packing><property name=\"expand\">False</property"
  "><property name=\"fill\">True</property><property name=\"position\">1</"
  "property></packing></child><child><object class=\"GtkAlignment\" id=\"a"
  "lignment5\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">False</property><property name=\"left_padding\">22</propert"
  "y><child><object class=\"GtkHBox\" id=\"custom-box\"><property name=\"v"
  "isible\">True</property><property name=\"can_focus\">False</property><p"
  "roperty name=\"spacing\">12</property><child><object class=\"GtkLabel\""
  " id=\"label5\"><property name=\"visible\">True</property><property name"
  "=\"can_focus\">False</property><property name=\"label\" translatable=\""
  "yes\">Menu _file:</property><property name=\"use_underline\">True</prop"
  "erty></object><packing><property name=\"expand\">False</property><prope"
  "rty name=\"fill\">True</property><property name=\"position\">0</propert"
  "y></packing></child><child><object class=\"GtkFileChooserButton\" id=\""
  "custom-file\"><property name=\"visible\">True</property><property name="
  "\"can_focus\">False</property><property name=\"title\" translatable=\"y"
  "es\">Select A Menu File</property></object><packing><property name=\"ex"
  "pand\">True</property><property name=\"fill\">True</property><property "
  "name=\"position\">1</property></packing></child></object></child></obje"
  "ct><packing><property name=\"expand\">False</property><property name=\""
  "fill\">True</property><property name=\"position\">2</property></packing"
  "></child></object></child></object></child><child type=\"label\"><objec"
  "t class=\"GtkLabel\" id=\"label3\"><property name=\"visible\">True</pro"
  "perty><property name=\"can_focus\">False</property><property name=\"lab"
  "el\" translatable=\"yes\">Menu File</property><attributes><attribute na"
  "me=\"weight\" value=\"bold\"/></attributes></object></child></object><p"
  "acking><property name=\"expand\">False</property><property name=\"fill\""
  ">True</property><property name=\"position\">1</property></packing></chi"
  "ld></object><packing><property name=\"expand\">False</property><propert"
  "y name=\"fill\">True</property><property name=\"position\">1</property>"
  "</packing></child></object></child><action-widgets><action-widget respo"
  "nse=\"0\">help-button</action-widget><action-widget response=\"0\">clos"
  "e-button</action-widget></action-widgets></object><object class=\"GtkSi"
  "zeGroup\" id=\"sizegroup1\"/></interface>"
};

static const unsigned applicationsmenu_dialog_ui_length = 12142u;

