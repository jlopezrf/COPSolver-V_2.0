/*************************************************/
/* START of ParamManager */
#include <cpls/ParamManager.h>

#include <x10/util/OptionsParser.h>
#include <x10/lang/Char.h>
#include <x10/lang/String.h>
#include <x10/io/File.h>
#include <x10/lang/Rail.h>
#include <x10/util/Option.h>
#include <x10/lang/Unsafe.h>
#include <x10/io/IOException.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Iterator.h>
#include <x10/io/ReaderIterator.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Int.h>
#include <x10/util/HashMap.h>
#include <x10/util/Box.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Math.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <x10/compiler/Synthetic.h>

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::_constructor(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    (this)->::x10::util::OptionsParser::_constructor(args, (__extension__ ({
                                                         
                                                         //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__104734 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__104734->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__104922 = ::x10aux::makeStringLit("h"); strLit__104922; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104923 = ::x10aux::makeStringLit("help"); strLit__104923; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104924 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__104924; }))));
                                                         t__104734;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__104738 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)52ll), false);
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__104928 = ::x10aux::makeStringLit("p"); strLit__104928; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104929 = ::x10aux::makeStringLit("problem"); strLit__104929; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104930 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__104930; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__104931 = ::x10aux::makeStringLit("f"); strLit__104931; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104932 = ::x10aux::makeStringLit("problem_file"); strLit__104932; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104933 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__104933; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__104937 = ::x10aux::makeStringLit("s"); strLit__104937; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104941 = ::x10aux::makeStringLit("size"); strLit__104941; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104942 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__104942; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__104943 = ::x10aux::makeStringLit("S"); strLit__104943; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104944 = ::x10aux::makeStringLit("seed"); strLit__104944; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104945 = ::x10aux::makeStringLit("seed. Default 0"); strLit__104945; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__104946 = ::x10aux::makeStringLit("sm"); strLit__104946; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104947 = ::x10aux::makeStringLit("solver_mode"); strLit__104947; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104949 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__104949; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__104955 = ::x10aux::makeStringLit("me"); strLit__104955; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104956 = ::x10aux::makeStringLit("Control Strategy"); strLit__104956; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104957 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 0."); strLit__104957; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__104959 = ::x10aux::makeStringLit("sl"); strLit__104959; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104961 = ::x10aux::makeStringLit("solver"); strLit__104961; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104962 = ::x10aux::makeStringLit("Solver to use"); strLit__104962; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__104967 = ::x10aux::makeStringLit("of"); strLit__104967; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104968 = ::x10aux::makeStringLit("out_format"); strLit__104968; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104969 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__104969; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__104976 = ::x10aux::makeStringLit("tf"); strLit__104976; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104977 = ::x10aux::makeStringLit("target_from"); strLit__104977; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104978 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__104978; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__104979 = ::x10aux::makeStringLit("tc"); strLit__104979; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104980 = ::x10aux::makeStringLit("target_cost"); strLit__104980; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104981 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__104981; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__104985 = ::x10aux::makeStringLit("b"); strLit__104985; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104986 = ::x10aux::makeStringLit("bench"); strLit__104986; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104987 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__104987; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__104988 = ::x10aux::makeStringLit("pf"); strLit__104988; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104990 = ::x10aux::makeStringLit("param_file"); strLit__104990; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104991 = ::x10aux::makeStringLit("path of the parameters file"); strLit__104991; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__104997 = ::x10aux::makeStringLit("v"); strLit__104997; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104998 = ::x10aux::makeStringLit("verify"); strLit__104998; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__104999 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__104999; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105000 = ::x10aux::makeStringLit("ca"); strLit__105000; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105001 = ::x10aux::makeStringLit("comp_AVG"); strLit__105001; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105002 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__105002; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105006 = ::x10aux::makeStringLit("N"); strLit__105006; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105007 = ::x10aux::makeStringLit("nodes_per_team"); strLit__105007; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105009 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__105009; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105012 = ::x10aux::makeStringLit("U"); strLit__105012; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105013 = ::x10aux::makeStringLit("update"); strLit__105013; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105014 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations) . Default 0 - no communication."); strLit__105014; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105016 = ::x10aux::makeStringLit("R"); strLit__105016; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105018 = ::x10aux::makeStringLit("report"); strLit__105018; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105020 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations) . Default 0 - no communication."); strLit__105020; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105024 = ::x10aux::makeStringLit("C"); strLit__105024; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105025 = ::x10aux::makeStringLit("p_change_vector"); strLit__105025; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105026 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__105026; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105028 = ::x10aux::makeStringLit("I"); strLit__105028; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105030 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__105030; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105032 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__105032; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105036 = ::x10aux::makeStringLit("D"); strLit__105036; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105037 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__105037; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105041 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__105041; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105042 = ::x10aux::makeStringLit("W"); strLit__105042; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105043 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__105043; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105045 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__105045; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105046 = ::x10aux::makeStringLit("A"); strLit__105046; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105047 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__105047; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105048 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__105048; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105050 = ::x10aux::makeStringLit("O"); strLit__105050; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105051 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__105051; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105052 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__105052; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105055 = ::x10aux::makeStringLit("M"); strLit__105055; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105056 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__105056; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105057 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__105057; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105058 = ::x10aux::makeStringLit("CD"); strLit__105058; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105061 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__105061; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105063 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__105063; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105067 = ::x10aux::makeStringLit("P_e"); strLit__105067; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105068 = ::x10aux::makeStringLit("poolsize_elite"); strLit__105068; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105069 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__105069; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105070 = ::x10aux::makeStringLit("P_lm"); strLit__105070; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105071 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__105071; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105072 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__105072; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105079 = ::x10aux::makeStringLit("P_eM"); strLit__105079; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105080 = ::x10aux::makeStringLit("ep_mode"); strLit__105080; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105081 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__105081; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105082 = ::x10aux::makeStringLit("P_lmM"); strLit__105082; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105083 = ::x10aux::makeStringLit("lmp_mode"); strLit__105083; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105085 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__105085; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105091 = ::x10aux::makeStringLit("P_eD"); strLit__105091; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105092 = ::x10aux::makeStringLit("ep_dist"); strLit__105092; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105093 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__105093; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105095 = ::x10aux::makeStringLit("P_lmD"); strLit__105095; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105097 = ::x10aux::makeStringLit("lmp_dist"); strLit__105097; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105098 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__105098; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105100 = ::x10aux::makeStringLit("mt"); strLit__105100; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105101 = ::x10aux::makeStringLit("max_time"); strLit__105101; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105102 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__105102; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105106 = ::x10aux::makeStringLit("mi"); strLit__105106; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105107 = ::x10aux::makeStringLit("max_iter"); strLit__105107; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105108 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__105108; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105112 = ::x10aux::makeStringLit("mr"); strLit__105112; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105113 = ::x10aux::makeStringLit("max_restart"); strLit__105113; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105114 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__105114; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105115 = ::x10aux::makeStringLit("rp"); strLit__105115; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105116 = ::x10aux::makeStringLit("rep_partial"); strLit__105116; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105123 = ::x10aux::makeStringLit("report partial results"); strLit__105123; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105124 = ::x10aux::makeStringLit("dbg"); strLit__105124; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105125 = ::x10aux::makeStringLit("debug_terminal"); strLit__105125; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105126 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__105126; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105132 = ::x10aux::makeStringLit("AS_vtr"); strLit__105132; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105134 = ::x10aux::makeStringLit("AS_varToReset"); strLit__105134; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105135 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__105135; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105139 = ::x10aux::makeStringLit("AS_rp"); strLit__105139; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105140 = ::x10aux::makeStringLit("AS_resetPer"); strLit__105140; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105141 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__105141; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105142 = ::x10aux::makeStringLit("AS_flm"); strLit__105142; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105143 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__105143; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105144 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__105144; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105147 = ::x10aux::makeStringLit("AS_fs"); strLit__105147; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105152 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__105152; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105153 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__105153; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105154 = ::x10aux::makeStringLit("AS_rl"); strLit__105154; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105155 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__105155; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105156 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__105156; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105157 = ::x10aux::makeStringLit("AS_plm"); strLit__105157; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105159 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__105159; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105161 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__105161; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105166 = ::x10aux::makeStringLit("AS_e"); strLit__105166; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105167 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__105167; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105168 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__105168; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105172 = ::x10aux::makeStringLit("AS_fb"); strLit__105172; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105173 = ::x10aux::makeStringLit("AS_firstBest"); strLit__105173; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105175 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__105175; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105177 = ::x10aux::makeStringLit("EO_t"); strLit__105177; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105179 = ::x10aux::makeStringLit("EO_tau"); strLit__105179; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105180 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__105180; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105181 = ::x10aux::makeStringLit("EO_p"); strLit__105181; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105182 = ::x10aux::makeStringLit("EO_pdf"); strLit__105182; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105183 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__105183; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105185 = ::x10aux::makeStringLit("EO_ss"); strLit__105185; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105186 = ::x10aux::makeStringLit("EO_selSec"); strLit__105186; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105187 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__105187; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105188 = ::x10aux::makeStringLit("RoTS_t"); strLit__105188; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105189 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__105189; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105190 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__105190; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105191 = ::x10aux::makeStringLit("RoTS_a"); strLit__105191; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105192 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__105192; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105193 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__105193; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105196 = ::x10aux::makeStringLit("if"); strLit__105196; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105197 = ::x10aux::makeStringLit("input_vector_file"); strLit__105197; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105198 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__105198; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105203 = ::x10aux::makeStringLit("bv"); strLit__105203; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105204 = ::x10aux::makeStringLit("model_baseValue"); strLit__105204; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105205 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__105205; }))));
                                                         t__104738->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__105209 = ::x10aux::makeStringLit("LNP_k"); strLit__105209; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105210 = ::x10aux::makeStringLit("LNP_k"); strLit__105210; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__105211 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__105211; }))));
                                                         t__104738;
                                                     }))
                                                     );
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__105212 = ::x10aux::makeStringLit("-pf"); strLit__105212; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__105213 = ::x10aux::makeStringLit("CPLS.param"); strLit__105213; })));
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    try {
        
        //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        this->FMGL(paramFile) = ::x10::io::File::_make(this->FMGL(paramFileName));
    }
    catch (::x10::lang::CheckedThrowable* __exc9) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc9)) {
            ::x10::io::IOException* id__90958 = static_cast< ::x10::io::IOException*>(__exc9);
            {
                
                //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                this->FMGL(paramFile) = (::x10aux::class_cast_unchecked< ::x10::io::File*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        } else
        throw;
    }
}
::cpls::ParamManager* cpls::ParamManager::_make(::x10::lang::Rail< ::x10::lang::String* >* args)
{
    ::cpls::ParamManager* this_ = new (::x10aux::alloc_z< ::cpls::ParamManager>()) ::cpls::ParamManager();
    this_->_constructor(args);
    return this_;
}



//#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::parseFile() {
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals(this->FMGL(paramFile), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__105226 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__105226; }))));
        
        //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return;
    }
    
    //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__103419;
        for (line__103419 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__103419));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__103419));
            
            //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(line)->x10::lang::String::length(),
                                         ((x10_int)0)))) {
                continue;
            }
            
            //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals((line)->charAt(((x10_int)0)),
                                         ((x10_char)'#'))))
            {
                continue;
            }
            
            //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            x10_int sepIndex = ::x10aux::nullCheck(line)->x10::lang::String::indexOf(
                                 this->FMGL(SEPARETOR));
            
            //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* key = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                         ((x10_int)0), sepIndex);
            
            //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* value = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                           ((sepIndex) + (((x10_int)1))));
            
            //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::Rail< ::x10::lang::String* >* res =
              this->cpls::ParamManager::myGet(key);
            
            //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(res, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                continue;
            } else {
                
                //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                ::x10::lang::Any* values = this->howManyValues(
                                             key);
                
                //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                if ((::x10aux::struct_equals((::x10aux::class_cast<x10_int>(values)),
                                             ((x10_int)0))))
                {
                    
                    //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10aux::nullCheck(this->FMGL(properties))->put(
                      key, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                            value));
                    
                    //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::util::Option option = ::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                                   key, ::x10::util::Option::FMGL(BAD__get)());
                    
                    //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if ((::x10aux::struct_equals(option, ::x10::util::Option::FMGL(BAD__get)())))
                    {
                        break;
                    }
                    
                    //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::lang::String* otherForm = option->otherForm(
                                                       key);
                    
                    //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if (((::x10aux::nullCheck(otherForm)->x10::lang::String::length()) > (((x10_int)0))))
                    {
                        ::x10aux::nullCheck(this->FMGL(properties))->put(
                          otherForm, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                                      value));
                    }
                    
                } else {
                    
                    //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    continue;
                }
                
            }
            
        }
    }
    
}

//#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
::x10::lang::Rail< ::x10::lang::String* >* cpls::ParamManager::myGet(
  ::x10::lang::String* key) {
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* winner = key;
    
    //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_boolean isValid = true;
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals((key)->charAt(((x10_int)0)),
                                 ((x10_char)'-')))) {
        
        //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       key, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            isValid = false;
        }
        
    } else {
        
        //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__105269 = ::x10aux::makeStringLit("-"); strLit__105269; })), key);
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__105277 = ::x10aux::makeStringLit("--"); strLit__105277; })), key);
            
            //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                           winner, ::x10::util::Option::FMGL(BAD__get)()),
                                         ::x10::util::Option::FMGL(BAD__get)())))
            {
                isValid = false;
            }
            
        }
        
    }
    
    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if (isValid) {
        return ::x10aux::nullCheck(this->FMGL(properties))->getOrElse(
                 winner, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)0ll)));
        
    } else {
        
        //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::String* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
}

//#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::printParameters() {
    
    //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* problem = this->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__105282 = ::x10aux::makeStringLit("-p"); strLit__105282; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__105283 = ::x10aux::makeStringLit("MSP"); strLit__105283; })));
    
    //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__105294 = ::x10aux::makeStringLit("-f"); strLit__105294; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__105295 = ::x10aux::makeStringLit("."); strLit__105295; })));
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__105296 = ::x10aux::makeStringLit("-s"); strLit__105296; })),
                                                     ((x10_int)10));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__105297 = ::x10aux::makeStringLit("-sm"); strLit__105297; })),
                           ((x10_int)1));
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__105298 = ::x10aux::makeStringLit("-mi"); strLit__105298; })),
                             ((x10_int)1000000000));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__105299 = ::x10aux::makeStringLit("-mt"); strLit__105299; })),
                         ((x10_long)0ll));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__105300 = ::x10aux::makeStringLit("-tc"); strLit__105300; })),
                            ((x10_int)0));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__105303 = ::x10aux::makeStringLit("-tf"); strLit__105303; })),
                           ((x10_long)0ll));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__105304 = ::x10aux::makeStringLit("-b"); strLit__105304; })),
                                                       ((x10_int)10));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__105305 = ::x10aux::makeStringLit("-sl"); strLit__105305; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__105306 = ::x10aux::makeStringLit("AS"); strLit__105306; })));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__105307 = ::x10aux::makeStringLit("-N"); strLit__105307; })),
                           ((x10_int)1));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__105308 = ::x10aux::makeStringLit("-U"); strLit__105308; })),
                                                        ((x10_int)0));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__105309 = ::x10aux::makeStringLit("-R"); strLit__105309; })),
                                                        ((x10_int)0));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__105310 = ::x10aux::makeStringLit("-C"); strLit__105310; })),
                           ((x10_int)100));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__105311 = ::x10aux::makeStringLit("-P_e"); strLit__105311; })),
                         ((x10_int)4));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__105312 = ::x10aux::makeStringLit("-I"); strLit__105312; })),
                         ((x10_long)0ll));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__105313 = ::x10aux::makeStringLit("-D"); strLit__105313; })),
                               0.3);
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__105314 = ::x10aux::makeStringLit("-W"); strLit__105314; })),
                                                        ((x10_long)0ll));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__105315 = ::x10aux::makeStringLit("-A"); strLit__105315; })),
                             0.0);
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__105316 = ::x10aux::makeStringLit("-M"); strLit__105316; })),
                            ((x10_int)1));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__105317 = ::x10aux::makeStringLit("-CD"); strLit__105317; })),
                             ((x10_int)1));
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__105318 = ::x10aux::makeStringLit("-if"); strLit__105318; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__105319 = ::x10aux::makeStringLit("."); strLit__105319; })));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__105320 = ::x10aux::makeStringLit("-of"); strLit__105320; })),
                          ((x10_int)1));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__105321 = ::x10aux::makeStringLit(""); strLit__105321; }))));
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__105322 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__105322; }))));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__105323 = ::x10aux::makeStringLit("Problem "); strLit__105323; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__105324 = ::x10aux::makeStringLit(" size "); strLit__105324; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__105325 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__105325; }))), filePath)));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__105326 = ::x10aux::makeStringLit(""); strLit__105326; }))));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__105327 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__105327; }))));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__105328 = ::x10aux::makeStringLit("Solver: "); strLit__105328; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__105329 = ::x10aux::makeStringLit(", Mode: "); strLit__105329; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__105330 = ::x10aux::makeStringLit("sequential"); strLit__105330; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__105331 = ::x10aux::makeStringLit("parallel"); strLit__105331; })))), (__extension__ ({ static ::x10::lang::String* strLit__105332 = ::x10aux::makeStringLit(", Limit: "); strLit__105332; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__105333 = ::x10aux::makeStringLit(" iterations or "); strLit__105333; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__105334 = ::x10aux::makeStringLit(" ms."); strLit__105334; })))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__105335 = ::x10aux::makeStringLit("Target cost from "); strLit__105335; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                   ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__105336 = ::x10aux::makeStringLit("file. "); strLit__105336; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__105337 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__105337; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__105338 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__105338; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__105339 = ::x10aux::makeStringLit(""); strLit__105339; }))));
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__105340 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__105340; }))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__105341 = ::x10aux::makeStringLit("Using "); strLit__105341; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__105342 = ::x10aux::makeStringLit("Without "); strLit__105342; }))), (__extension__ ({ static ::x10::lang::String* strLit__105343 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__105343; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__105344 = ::x10aux::makeStringLit(" places. "); strLit__105344; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__105345 = ::x10aux::makeStringLit(" nodes per team "); strLit__105345; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__105346 = ::x10aux::makeStringLit(" Teams"); strLit__105346; })))));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__105347 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__105347; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__105348 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__105348; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__105349 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__105349; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__105350 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__105350; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__105351 = ::x10aux::makeStringLit("%"); strLit__105351; })))));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__105352 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__105352; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__105353 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__105353; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__105354 = ::x10aux::makeStringLit(" Initial delay "); strLit__105354; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__105355 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__105355; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__105356 = ::x10aux::makeStringLit("%"); strLit__105356; })))));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__105357 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__105357; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                           ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__105358 = ::x10aux::makeStringLit(" Change Vector "); strLit__105358; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__105359 = ::x10aux::makeStringLit(" - "); strLit__105359; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                          ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__105360 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__105360; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__105361 = ::x10aux::makeStringLit(" - "); strLit__105361; }))))));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__105362 = ::x10aux::makeStringLit(""); strLit__105362; }))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__105363 = ::x10aux::makeStringLit("Other Parameters:"); strLit__105363; }))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__105364 = ::x10aux::makeStringLit("Max threads "); strLit__105364; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__105365 = ::x10aux::makeStringLit(" NTHREADS "); strLit__105365; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__105366 = ::x10aux::makeStringLit("Solving "); strLit__105366; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__105367 = ::x10aux::makeStringLit(" times each instance"); strLit__105367; })))));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__105368 = ::x10aux::makeStringLit(" Input vector "); strLit__105368; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__105369 = ::x10aux::makeStringLit("."); strLit__105369; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__105370 = ::x10aux::makeStringLit("not used"); strLit__105370; })))
        : (inputPath))));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__105371 = ::x10aux::makeStringLit(""); strLit__105371; }))));
}

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ParamManager.x10"
::cpls::ParamManager* cpls::ParamManager::cpls__ParamManager____this__cpls__ParamManager(
  ) {
    return this;
    
}
void cpls::ParamManager::__fieldInitializers_cpls_ParamManager(
  ) {
    this->FMGL(SEPARETOR) = ((x10_char)' ');
}
const ::x10aux::serialization_id_t cpls::ParamManager::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::ParamManager::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::ParamManager::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::util::OptionsParser::_serialize_body(buf);
    buf.write(this->FMGL(paramFileName));
    buf.write(this->FMGL(paramFile));
    buf.write(this->FMGL(SEPARETOR));
    
}

::x10::lang::Reference* ::cpls::ParamManager::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::ParamManager* this_ = new (::x10aux::alloc_z< ::cpls::ParamManager>()) ::cpls::ParamManager();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::ParamManager::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::util::OptionsParser::_deserialize_body(buf);
    FMGL(paramFileName) = buf.read< ::x10::lang::String*>();
    FMGL(paramFile) = buf.read< ::x10::io::File*>();
    FMGL(SEPARETOR) = buf.read<x10_char>();
}

::x10aux::RuntimeType cpls::ParamManager::rtt;
void cpls::ParamManager::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::util::OptionsParser>()};
    rtt.initStageTwo("cpls.ParamManager",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of ParamManager */
/*************************************************/
