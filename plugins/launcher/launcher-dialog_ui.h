/* automatically generated from launcher-dialog.glade */
#ifdef __SUNPRO_C
#pragma align 4 (launcher_dialog_ui)
#endif
#ifdef __GNUC__
static const char launcher_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char launcher_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"3.20\"/><requires lib=\"libxfce4ui-2\" version=\"4.12\"/"
  "><object class=\"GtkListStore\" id=\"add-store\"><columns><column type="
  "\"GdkPixbuf\"/><column type=\"gchararray\"/><column type=\"GObject\"/><"
  "column type=\"gchararray\"/><column type=\"gchararray\"/></columns></ob"
  "ject><object class=\"GtkTreeModelFilter\" id=\"add-store-filter\"><prop"
  "erty name=\"child_model\">add-store</property></object><object class=\""
  "GtkListStore\" id=\"arrow-position-model\"><columns><column type=\"gcha"
  "rarray\"/></columns><data><row><col id=\"0\" translatable=\"yes\">Defau"
  "lt</col></row><row><col id=\"0\" translatable=\"yes\">North</col></row>"
  "<row><col id=\"0\" translatable=\"yes\">West</col></row><row><col id=\""
  "0\" translatable=\"yes\">East</col></row><row><col id=\"0\" translatabl"
  "e=\"yes\">South</col></row><row><col id=\"0\" translatable=\"yes\">Insi"
  "de Button</col></row></data></object><object class=\"GtkImage\" id=\"im"
  "age11\"><property name=\"visible\">True</property><property name=\"can_"
  "focus\">False</property><property name=\"icon_name\">accessories-text-e"
  "ditor</property><property name=\"icon_size\">1</property></object><obje"
  "ct class=\"GtkImage\" id=\"image12\"><property name=\"visible\">True</p"
  "roperty><property name=\"can_focus\">False</property><property name=\"i"
  "con_name\">edit-delete</property><property name=\"icon_size\">1</proper"
  "ty></object><object class=\"GtkImage\" id=\"image13\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">False</property><"
  "property name=\"icon_name\">document-new</property><property name=\"ico"
  "n_size\">1</property></object><object class=\"GtkImage\" id=\"image14\""
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">False</property><property name=\"icon_name\">applications-internet</pr"
  "operty><property name=\"icon_size\">1</property></object><object class="
  "\"GtkImage\" id=\"image15\"><property name=\"visible\">True</property><"
  "property name=\"can_focus\">False</property><property name=\"icon_name\""
  ">list-add</property><property name=\"icon_size\">1</property></object><"
  "object class=\"GtkImage\" id=\"image16\"><property name=\"visible\">Tru"
  "e</property><property name=\"can_focus\">False</property><property name"
  "=\"icon_name\">go-up</property><property name=\"icon_size\">1</property"
  "></object><object class=\"GtkImage\" id=\"image17\"><property name=\"vi"
  "sible\">True</property><property name=\"can_focus\">False</property><pr"
  "operty name=\"icon_name\">go-up</property></object><object class=\"GtkI"
  "mage\" id=\"image18\"><property name=\"visible\">True</property><proper"
  "ty name=\"can_focus\">False</property><property name=\"icon_name\">go-d"
  "own</property><property name=\"icon_size\">1</property></object><object"
  " class=\"GtkMenu\" id=\"popup-menu\"><property name=\"visible\">True</p"
  "roperty><property name=\"can_focus\">False</property><child><object cla"
  "ss=\"GtkImageMenuItem\" id=\"mi-move-up\"><property name=\"label\" tran"
  "slatable=\"yes\">Up</property><property name=\"visible\">True</property"
  "><property name=\"can_focus\">False</property><property name=\"image\">"
  "image16</property><property name=\"use_stock\">False</property></object"
  "></child><child><object class=\"GtkImageMenuItem\" id=\"mi-move-down\">"
  "<property name=\"label\" translatable=\"yes\">Down</property><property "
  "name=\"visible\">True</property><property name=\"can_focus\">False</pro"
  "perty><property name=\"image\">image18</property><property name=\"use_s"
  "tock\">False</property></object></child><child><object class=\"GtkSepar"
  "atorMenuItem\" id=\"smi1\"><property name=\"visible\">True</property><p"
  "roperty name=\"can_focus\">False</property></object></child><child><obj"
  "ect class=\"GtkImageMenuItem\" id=\"mi-edit\"><property name=\"label\" "
  "translatable=\"yes\">_Edit Item</property><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">False</property><property nam"
  "e=\"use_underline\">True</property><property name=\"image\">image11</pr"
  "operty><property name=\"use_stock\">False</property></object></child><c"
  "hild><object class=\"GtkImageMenuItem\" id=\"mi-delete\"><property name"
  "=\"label\" translatable=\"yes\">D_elete Item</property><property name=\""
  "visible\">True</property><property name=\"can_focus\">False</property><"
  "property name=\"use_underline\">True</property><property name=\"image\""
  ">image12</property><property name=\"use_stock\">False</property></objec"
  "t></child><child><object class=\"GtkSeparatorMenuItem\" id=\"smi2\"><pr"
  "operty name=\"visible\">True</property><property name=\"can_focus\">Fal"
  "se</property></object></child><child><object class=\"GtkImageMenuItem\""
  " id=\"mi-add\"><property name=\"label\" translatable=\"yes\">Add Appli_"
  "cation</property><property name=\"visible\">True</property><property na"
  "me=\"can_focus\">False</property><property name=\"use_underline\">True<"
  "/property><property name=\"image\">image15</property><property name=\"u"
  "se_stock\">False</property></object></child><child><object class=\"GtkS"
  "eparatorMenuItem\" id=\"smi3\"><property name=\"visible\">True</propert"
  "y><property name=\"can_focus\">False</property></object></child><child>"
  "<object class=\"GtkImageMenuItem\" id=\"mi-application\"><property name"
  "=\"label\" translatable=\"yes\">New _Application</property><property na"
  "me=\"visible\">True</property><property name=\"can_focus\">False</prope"
  "rty><property name=\"use_underline\">True</property><property name=\"im"
  "age\">image13</property><property name=\"use_stock\">False</property></"
  "object></child><child><object class=\"GtkImageMenuItem\" id=\"mi-link\""
  "><property name=\"label\" translatable=\"yes\">New _Link</property><pro"
  "perty name=\"visible\">True</property><property name=\"can_focus\">Fals"
  "e</property><property name=\"use_underline\">True</property><property n"
  "ame=\"image\">image14</property><property name=\"use_stock\">False</pro"
  "perty></object></child></object><object class=\"GtkImage\" id=\"image19"
  "\"><property name=\"visible\">True</property><property name=\"can_focus"
  "\">False</property><property name=\"icon_name\">list-add</property></ob"
  "ject><object class=\"GtkImage\" id=\"image6\"><property name=\"visible\""
  ">True</property><property name=\"can_focus\">False</property><property "
  "name=\"icon_name\">help-browser</property></object><object class=\"GtkI"
  "mage\" id=\"image7\"><property name=\"visible\">True</property><propert"
  "y name=\"can_focus\">False</property><property name=\"icon_name\">windo"
  "w-close-symbolic</property></object><object class=\"XfceTitledDialog\" "
  "id=\"dialog-add\"><property name=\"can_focus\">False</property><propert"
  "y name=\"title\" translatable=\"yes\">Add New Item</property><property "
  "name=\"window_position\">center-on-parent</property><property name=\"de"
  "fault_width\">400</property><property name=\"default_height\">400</prop"
  "erty><property name=\"destroy_with_parent\">True</property><property na"
  "me=\"icon_name\">list-add</property><property name=\"type_hint\">normal"
  "</property><property name=\"subtitle\" translatable=\"yes\">Add one or "
  "more existing items to the launcher</property><child internal-child=\"v"
  "box\"><object class=\"GtkBox\" id=\"dialog-vbox4\"><property name=\"vis"
  "ible\">True</property><property name=\"can_focus\">False</property><pro"
  "perty name=\"orientation\">vertical</property><property name=\"spacing\""
  ">2</property><child internal-child=\"action_area\"><object class=\"GtkB"
  "uttonBox\" id=\"dialog-action_area4\"><property name=\"visible\">True</"
  "property><property name=\"can_focus\">False</property><property name=\""
  "layout_style\">end</property><child><object class=\"GtkButton\" id=\"bu"
  "tton-add\"><property name=\"label\" translatable=\"yes\">_Add</property"
  "><property name=\"visible\">True</property><property name=\"sensitive\""
  ">False</property><property name=\"can_focus\">True</property><property "
  "name=\"receives_default\">True</property><property name=\"image\">image"
  "19</property><property name=\"use_underline\">True</property></object><"
  "packing><property name=\"expand\">False</property><property name=\"fill"
  "\">False</property><property name=\"position\">0</property></packing></"
  "child><child><object class=\"GtkButton\" id=\"button5\"><property name="
  "\"label\" translatable=\"yes\">_Close</property><property name=\"visibl"
  "e\">True</property><property name=\"can_focus\">True</property><propert"
  "y name=\"receives_default\">True</property><property name=\"image\">ima"
  "ge7</property><property name=\"use_underline\">True</property></object>"
  "<packing><property name=\"expand\">False</property><property name=\"fil"
  "l\">False</property><property name=\"position\">1</property></packing><"
  "/child></object><packing><property name=\"expand\">False</property><pro"
  "perty name=\"fill\">False</property><property name=\"pack_type\">end</p"
  "roperty><property name=\"position\">0</property></packing></child><chil"
  "d><object class=\"GtkBox\" id=\"vbox2\"><property name=\"visible\">True"
  "</property><property name=\"can_focus\">False</property><property name="
  "\"border_width\">6</property><property name=\"orientation\">vertical</p"
  "roperty><property name=\"spacing\">6</property><child><object class=\"G"
  "tkBox\" id=\"hbox4\"><property name=\"visible\">True</property><propert"
  "y name=\"can_focus\">False</property><property name=\"spacing\">6</prop"
  "erty><child><object class=\"GtkLabel\" id=\"label4\"><property name=\"v"
  "isible\">True</property><property name=\"can_focus\">False</property><p"
  "roperty name=\"label\" translatable=\"yes\">_Search:</property><propert"
  "y name=\"use_underline\">True</property><property name=\"xalign\">1</pr"
  "operty></object><packing><property name=\"expand\">False</property><pro"
  "perty name=\"fill\">True</property><property name=\"position\">0</prope"
  "rty></packing></child><child><object class=\"GtkEntry\" id=\"add-search"
  "\"><property name=\"visible\">True</property><property name=\"can_focus"
  "\">True</property></object><packing><property name=\"expand\">False</pr"
  "operty><property name=\"fill\">True</property><property name=\"position"
  "\">1</property></packing></child></object><packing><property name=\"exp"
  "and\">False</property><property name=\"fill\">True</property><property "
  "name=\"position\">0</property></packing></child><child><object class=\""
  "GtkScrolledWindow\" id=\"scrolledwindow1\"><property name=\"visible\">T"
  "rue</property><property name=\"can_focus\">True</property><property nam"
  "e=\"vexpand\">True</property><property name=\"shadow_type\">etched-in</"
  "property><child><object class=\"GtkTreeView\" id=\"add-treeview\"><prop"
  "erty name=\"visible\">True</property><property name=\"can_focus\">True<"
  "/property><property name=\"model\">add-store-filter</property><property"
  " name=\"headers_visible\">False</property><property name=\"rules_hint\""
  ">True</property><property name=\"enable_search\">False</property><prope"
  "rty name=\"tooltip_column\">3</property><child internal-child=\"selecti"
  "on\"><object class=\"GtkTreeSelection\"/></child><child><object class=\""
  "GtkTreeViewColumn\" id=\"treeviewcolumn1\"><property name=\"spacing\">2"
  "</property><child><object class=\"GtkCellRendererPixbuf\" id=\"addrende"
  "rericon\"/><attributes><attribute name=\"pixbuf\">0</attribute></attrib"
  "utes></child><child><object class=\"GtkCellRendererText\" id=\"addrende"
  "rername\"/><attributes><attribute name=\"markup\">1</attribute></attrib"
  "utes></child></object></child></object></child></object><packing><prope"
  "rty name=\"expand\">True</property><property name=\"fill\">True</proper"
  "ty><property name=\"position\">1</property></packing></child></object><"
  "packing><property name=\"expand\">True</property><property name=\"fill\""
  ">True</property><property name=\"position\">1</property></packing></chi"
  "ld></object></child><action-widgets><action-widget response=\"1\">butto"
  "n-add</action-widget><action-widget response=\"0\">button5</action-widg"
  "et></action-widgets></object><object class=\"GtkImage\" id=\"image8\"><"
  "property name=\"visible\">True</property><property name=\"can_focus\">F"
  "alse</property><property name=\"icon_name\">window-close-symbolic</prop"
  "erty></object><object class=\"GtkListStore\" id=\"item-store\"><columns"
  "><column type=\"GdkPixbuf\"/><column type=\"gchararray\"/><column type="
  "\"GObject\"/><column type=\"gchararray\"/></columns></object><object cl"
  "ass=\"XfceTitledDialog\" id=\"dialog\"><property name=\"can_focus\">Fal"
  "se</property><property name=\"title\" translatable=\"yes\">Launcher</pr"
  "operty><property name=\"window_position\">center</property><property na"
  "me=\"default_width\">350</property><property name=\"default_height\">40"
  "0</property><property name=\"icon_name\">org.xfce.panel.launcher</prope"
  "rty><property name=\"type_hint\">normal</property><child internal-child"
  "=\"vbox\"><object class=\"GtkBox\" id=\"dialog-vbox2\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">False</property><"
  "property name=\"orientation\">vertical</property><property name=\"spaci"
  "ng\">2</property><child internal-child=\"action_area\"><object class=\""
  "GtkButtonBox\" id=\"dialog-action_area2\"><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">False</property><property nam"
  "e=\"layout_style\">end</property><child><object class=\"GtkButton\" id="
  "\"help-button\"><property name=\"label\" translatable=\"yes\">_Help</pr"
  "operty><property name=\"visible\">True</property><property name=\"can_f"
  "ocus\">True</property><property name=\"receives_default\">True</propert"
  "y><property name=\"image\">image6</property><property name=\"use_underl"
  "ine\">True</property></object><packing><property name=\"expand\">False<"
  "/property><property name=\"fill\">False</property><property name=\"posi"
  "tion\">0</property><property name=\"secondary\">True</property></packin"
  "g></child><child><object class=\"GtkButton\" id=\"button2\"><property n"
  "ame=\"label\" translatable=\"yes\">_Close</property><property name=\"vi"
  "sible\">True</property><property name=\"can_focus\">True</property><pro"
  "perty name=\"receives_default\">True</property><property name=\"image\""
  ">image8</property><property name=\"use_underline\">True</property></obj"
  "ect><packing><property name=\"expand\">False</property><property name=\""
  "fill\">False</property><property name=\"position\">1</property></packin"
  "g></child></object><packing><property name=\"expand\">False</property><"
  "property name=\"fill\">False</property><property name=\"pack_type\">end"
  "</property><property name=\"position\">0</property></packing></child><c"
  "hild><object class=\"GtkNotebook\" id=\"notebook2\"><property name=\"vi"
  "sible\">True</property><property name=\"can_focus\">True</property><pro"
  "perty name=\"vexpand\">True</property><property name=\"border_width\">6"
  "</property><child><object class=\"GtkBox\" id=\"hbox1\"><property name="
  "\"visible\">True</property><property name=\"can_focus\">False</property"
  "><property name=\"border_width\">6</property><property name=\"spacing\""
  ">6</property><child><object class=\"GtkScrolledWindow\" id=\"scrolledwi"
  "ndow2\"><property name=\"visible\">True</property><property name=\"can_"
  "focus\">True</property><property name=\"hexpand\">True</property><prope"
  "rty name=\"shadow_type\">etched-in</property><child><object class=\"Gtk"
  "TreeView\" id=\"item-treeview\"><property name=\"visible\">True</proper"
  "ty><property name=\"can_focus\">True</property><property name=\"model\""
  ">item-store</property><property name=\"headers_visible\">False</propert"
  "y><property name=\"rules_hint\">True</property><property name=\"enable_"
  "search\">False</property><property name=\"tooltip_column\">3</property>"
  "<child internal-child=\"selection\"><object class=\"GtkTreeSelection\"/"
  "></child><child><object class=\"GtkTreeViewColumn\" id=\"treeviewcolumn"
  "2\"><property name=\"spacing\">2</property><child><object class=\"GtkCe"
  "llRendererPixbuf\" id=\"itemrenderericon\"/><attributes><attribute name"
  "=\"pixbuf\">0</attribute></attributes></child><child><object class=\"Gt"
  "kCellRendererText\" id=\"itemrenderername\"/><attributes><attribute nam"
  "e=\"markup\">1</attribute></attributes></child></object></child></objec"
  "t></child></object><packing><property name=\"expand\">False</property><"
  "property name=\"fill\">True</property><property name=\"position\">0</pr"
  "operty></packing></child><child><object class=\"GtkBox\" id=\"vbox3\"><"
  "property name=\"visible\">True</property><property name=\"can_focus\">F"
  "alse</property><property name=\"orientation\">vertical</property><prope"
  "rty name=\"spacing\">6</property><child><object class=\"GtkBox\"><prope"
  "rty name=\"visible\">True</property><property name=\"can_focus\">False<"
  "/property><property name=\"orientation\">vertical</property><child><obj"
  "ect class=\"GtkButton\" id=\"item-move-up\"><property name=\"visible\">"
  "True</property><property name=\"can_focus\">True</property><property na"
  "me=\"receives_default\">True</property><property name=\"tooltip_text\" "
  "translatable=\"yes\">Move currently selected item up by one row</proper"
  "ty><child><object class=\"GtkImage\" id=\"image2\"><property name=\"vis"
  "ible\">True</property><property name=\"can_focus\">False</property><pro"
  "perty name=\"icon_name\">go-up</property></object></child></object><pac"
  "king><property name=\"expand\">False</property><property name=\"fill\">"
  "True</property><property name=\"position\">0</property></packing></chil"
  "d><child><object class=\"GtkButton\" id=\"item-move-down\"><property na"
  "me=\"visible\">True</property><property name=\"can_focus\">True</proper"
  "ty><property name=\"receives_default\">True</property><property name=\""
  "tooltip_text\" translatable=\"yes\">Move currently selected item down b"
  "y one row</property><child><object class=\"GtkImage\" id=\"image3\"><pr"
  "operty name=\"visible\">True</property><property name=\"can_focus\">Fal"
  "se</property><property name=\"icon_name\">go-down</property></object></"
  "child></object><packing><property name=\"expand\">False</property><prop"
  "erty name=\"fill\">True</property><property name=\"position\">1</proper"
  "ty></packing></child><style><class name=\"linked\"/></style></object><p"
  "acking><property name=\"expand\">False</property><property name=\"fill\""
  ">True</property><property name=\"position\">0</property></packing></chi"
  "ld><child><object class=\"GtkButton\" id=\"item-edit\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property><p"
  "roperty name=\"receives_default\">True</property><property name=\"toolt"
  "ip_text\" translatable=\"yes\">Edit the currently selected item</proper"
  "ty><child><object class=\"GtkImage\" id=\"image1\"><property name=\"vis"
  "ible\">True</property><property name=\"can_focus\">False</property><pro"
  "perty name=\"icon_name\">accessories-text-editor</property></object></c"
  "hild></object><packing><property name=\"expand\">False</property><prope"
  "rty name=\"fill\">True</property><property name=\"position\">1</propert"
  "y></packing></child><child><object class=\"GtkButton\" id=\"item-delete"
  "\"><property name=\"visible\">True</property><property name=\"can_focus"
  "\">True</property><property name=\"receives_default\">True</property><p"
  "roperty name=\"tooltip_text\" translatable=\"yes\">Delete the currently"
  " selected item</property><child><object class=\"GtkImage\" id=\"image9\""
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">False</property><property name=\"icon_name\">edit-delete</property></o"
  "bject></child></object><packing><property name=\"expand\">False</proper"
  "ty><property name=\"fill\">True</property><property name=\"position\">3"
  "</property></packing></child><child><object class=\"GtkButton\" id=\"it"
  "em-add\"><property name=\"visible\">True</property><property name=\"can"
  "_focus\">True</property><property name=\"receives_default\">True</prope"
  "rty><property name=\"tooltip_text\" translatable=\"yes\">Add one or mor"
  "e existing items to the launcher</property><child><object class=\"GtkIm"
  "age\" id=\"image4\"><property name=\"visible\">True</property><property"
  " name=\"can_focus\">False</property><property name=\"icon_name\">list-a"
  "dd</property></object></child></object><packing><property name=\"expand"
  "\">False</property><property name=\"fill\">True</property><property nam"
  "e=\"position\">4</property></packing></child><child><object class=\"Gtk"
  "Button\" id=\"item-new\"><property name=\"visible\">True</property><pro"
  "perty name=\"can_focus\">True</property><property name=\"receives_defau"
  "lt\">True</property><property name=\"tooltip_text\" translatable=\"yes\""
  ">Add a new empty item</property><child><object class=\"GtkImage\" id=\""
  "image10\"><property name=\"visible\">True</property><property name=\"ca"
  "n_focus\">False</property><property name=\"icon_name\">document-new</pr"
  "operty></object></child></object><packing><property name=\"expand\">Fal"
  "se</property><property name=\"fill\">True</property><property name=\"po"
  "sition\">4</property></packing></child><child><object class=\"GtkButton"
  "\" id=\"item-link\"><property name=\"visible\">True</property><property"
  " name=\"can_focus\">True</property><property name=\"receives_default\">"
  "True</property><property name=\"tooltip_text\" translatable=\"yes\">Add"
  " a new hyperlink</property><child><object class=\"GtkImage\" id=\"image"
  "5\"><property name=\"visible\">True</property><property name=\"can_focu"
  "s\">False</property><property name=\"icon_name\">applications-internet<"
  "/property></object></child></object><packing><property name=\"expand\">"
  "False</property><property name=\"fill\">True</property><property name=\""
  "position\">5</property></packing></child></object><packing><property na"
  "me=\"expand\">False</property><property name=\"fill\">True</property><p"
  "roperty name=\"position\">1</property></packing></child></object></chil"
  "d><child type=\"tab\"><object class=\"GtkLabel\" id=\"label1\"><propert"
  "y name=\"visible\">True</property><property name=\"can_focus\">False</p"
  "roperty><property name=\"label\" translatable=\"yes\">General</property"
  "></object><packing><property name=\"tab_fill\">False</property></packin"
  "g></child><child><object class=\"GtkBox\" id=\"vbox1\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">False</property><"
  "property name=\"border_width\">6</property><property name=\"orientation"
  "\">vertical</property><property name=\"spacing\">6</property><child><ob"
  "ject class=\"GtkCheckButton\" id=\"disable-tooltips\"><property name=\""
  "label\" translatable=\"yes\">Disable t_ooltips</property><property name"
  "=\"visible\">True</property><property name=\"can_focus\">True</property"
  "><property name=\"receives_default\">False</property><property name=\"t"
  "ooltip_text\" translatable=\"yes\">Select this option to disable the to"
  "oltips when moving over the panel button or menu items.</property><prop"
  "erty name=\"use_underline\">True</property><property name=\"draw_indica"
  "tor\">True</property></object><packing><property name=\"expand\">False<"
  "/property><property name=\"fill\">True</property><property name=\"posit"
  "ion\">0</property></packing></child><child><object class=\"GtkCheckButt"
  "on\" id=\"show-label\"><property name=\"label\" translatable=\"yes\">Sh"
  "ow _label instead of icon</property><property name=\"visible\">True</pr"
  "operty><property name=\"can_focus\">True</property><property name=\"rec"
  "eives_default\">False</property><property name=\"use_underline\">True</"
  "property><property name=\"draw_indicator\">True</property></object><pac"
  "king><property name=\"expand\">False</property><property name=\"fill\">"
  "True</property><property name=\"position\">1</property></packing></chil"
  "d><child><object class=\"GtkCheckButton\" id=\"move-first\"><property n"
  "ame=\"label\" translatable=\"yes\">Show last _used item in panel</prope"
  "rty><property name=\"visible\">True</property><property name=\"can_focu"
  "s\">True</property><property name=\"receives_default\">False</property>"
  "<property name=\"tooltip_text\" translatable=\"yes\">Select this option"
  " to move the clicked menu item to the panel.</property><property name=\""
  "use_underline\">True</property><property name=\"draw_indicator\">True</"
  "property></object><packing><property name=\"expand\">False</property><p"
  "roperty name=\"fill\">True</property><property name=\"position\">2</pro"
  "perty></packing></child><child><object class=\"GtkBox\" id=\"hbox2\"><p"
  "roperty name=\"visible\">True</property><property name=\"can_focus\">Fa"
  "lse</property><property name=\"spacing\">12</property><child><object cl"
  "ass=\"GtkLabel\" id=\"arrow-position-label\"><property name=\"visible\""
  ">True</property><property name=\"can_focus\">False</property><property "
  "name=\"label\" translatable=\"yes\">_Arrow button position:</property><"
  "property name=\"use_underline\">True</property></object><packing><prope"
  "rty name=\"expand\">False</property><property name=\"fill\">True</prope"
  "rty><property name=\"position\">0</property></packing></child><child><o"
  "bject class=\"GtkComboBox\" id=\"arrow-position\"><property name=\"visi"
  "ble\">True</property><property name=\"can_focus\">False</property><prop"
  "erty name=\"model\">arrow-position-model</property><child><object class"
  "=\"GtkCellRendererText\" id=\"cellrenderertext1\"/><attributes><attribu"
  "te name=\"text\">0</attribute></attributes></child></object><packing><p"
  "roperty name=\"expand\">True</property><property name=\"fill\">True</pr"
  "operty><property name=\"position\">1</property></packing></child></obje"
  "ct><packing><property name=\"expand\">False</property><property name=\""
  "fill\">True</property><property name=\"position\">3</property></packing"
  "></child></object><packing><property name=\"position\">1</property></pa"
  "cking></child><child type=\"tab\"><object class=\"GtkLabel\" id=\"label"
  "5\"><property name=\"visible\">True</property><property name=\"can_focu"
  "s\">False</property><property name=\"label\" translatable=\"yes\">Advan"
  "ced</property></object><packing><property name=\"position\">1</property"
  "><property name=\"tab_fill\">False</property></packing></child></object"
  "><packing><property name=\"expand\">False</property><property name=\"fi"
  "ll\">True</property><property name=\"position\">1</property></packing><"
  "/child></object></child><action-widgets><action-widget response=\"1\">h"
  "elp-button</action-widget><action-widget response=\"0\">button2</action"
  "-widget></action-widgets></object></interface>"
};

static const unsigned launcher_dialog_ui_length = 24458u;

