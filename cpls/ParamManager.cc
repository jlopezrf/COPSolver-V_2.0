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

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::_constructor(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    (this)->::x10::util::OptionsParser::_constructor(args, (__extension__ ({
                                                         
                                                         //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__32919 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__32919->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33030 = ::x10aux::makeStringLit("h"); strLit__33030; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33031 = ::x10aux::makeStringLit("help"); strLit__33031; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33032 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__33032; }))));
                                                         t__32919;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__32923 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)53ll), false);
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33033 = ::x10aux::makeStringLit("p"); strLit__33033; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33034 = ::x10aux::makeStringLit("problem"); strLit__33034; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33035 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__33035; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33036 = ::x10aux::makeStringLit("f"); strLit__33036; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33037 = ::x10aux::makeStringLit("problem_file"); strLit__33037; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33038 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__33038; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33039 = ::x10aux::makeStringLit("s"); strLit__33039; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33040 = ::x10aux::makeStringLit("size"); strLit__33040; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33041 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__33041; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33042 = ::x10aux::makeStringLit("S"); strLit__33042; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33043 = ::x10aux::makeStringLit("seed"); strLit__33043; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33044 = ::x10aux::makeStringLit("seed. Default 0"); strLit__33044; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33045 = ::x10aux::makeStringLit("sm"); strLit__33045; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33046 = ::x10aux::makeStringLit("solver_mode"); strLit__33046; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33047 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__33047; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33048 = ::x10aux::makeStringLit("ce"); strLit__33048; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33049 = ::x10aux::makeStringLit("Control Strategy"); strLit__33049; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33050 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__33050; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33051 = ::x10aux::makeStringLit("sl"); strLit__33051; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33052 = ::x10aux::makeStringLit("solver"); strLit__33052; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33053 = ::x10aux::makeStringLit("Solver to use"); strLit__33053; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33054 = ::x10aux::makeStringLit("of"); strLit__33054; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33055 = ::x10aux::makeStringLit("out_format"); strLit__33055; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33056 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__33056; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33057 = ::x10aux::makeStringLit("tf"); strLit__33057; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33058 = ::x10aux::makeStringLit("target_from"); strLit__33058; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33059 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__33059; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33060 = ::x10aux::makeStringLit("tc"); strLit__33060; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33061 = ::x10aux::makeStringLit("target_cost"); strLit__33061; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33062 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__33062; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33063 = ::x10aux::makeStringLit("b"); strLit__33063; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33064 = ::x10aux::makeStringLit("bench"); strLit__33064; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33065 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__33065; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33066 = ::x10aux::makeStringLit("pf"); strLit__33066; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33067 = ::x10aux::makeStringLit("param_file"); strLit__33067; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33068 = ::x10aux::makeStringLit("path of the parameters file"); strLit__33068; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33069 = ::x10aux::makeStringLit("v"); strLit__33069; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33070 = ::x10aux::makeStringLit("verify"); strLit__33070; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33071 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__33071; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33072 = ::x10aux::makeStringLit("ca"); strLit__33072; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33073 = ::x10aux::makeStringLit("comp_AVG"); strLit__33073; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33074 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__33074; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33075 = ::x10aux::makeStringLit("N"); strLit__33075; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33076 = ::x10aux::makeStringLit("nodes_per_team"); strLit__33076; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33077 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__33077; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33078 = ::x10aux::makeStringLit("U"); strLit__33078; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33079 = ::x10aux::makeStringLit("update"); strLit__33079; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33080 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__33080; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33081 = ::x10aux::makeStringLit("R"); strLit__33081; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33082 = ::x10aux::makeStringLit("report"); strLit__33082; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33083 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__33083; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33084 = ::x10aux::makeStringLit("C"); strLit__33084; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33085 = ::x10aux::makeStringLit("p_change_vector"); strLit__33085; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33086 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__33086; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33087 = ::x10aux::makeStringLit("I"); strLit__33087; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33088 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__33088; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33089 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__33089; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33090 = ::x10aux::makeStringLit("D"); strLit__33090; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33091 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__33091; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33092 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__33092; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33093 = ::x10aux::makeStringLit("W"); strLit__33093; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33094 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__33094; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33095 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__33095; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33096 = ::x10aux::makeStringLit("A"); strLit__33096; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33097 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__33097; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33098 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__33098; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33099 = ::x10aux::makeStringLit("O"); strLit__33099; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33100 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__33100; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33101 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__33101; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33102 = ::x10aux::makeStringLit("M"); strLit__33102; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33103 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__33103; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33104 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__33104; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33105 = ::x10aux::makeStringLit("CD"); strLit__33105; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33106 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__33106; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33107 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__33107; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33108 = ::x10aux::makeStringLit("P_e"); strLit__33108; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33109 = ::x10aux::makeStringLit("poolsize_elite"); strLit__33109; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33110 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__33110; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33111 = ::x10aux::makeStringLit("P_lm"); strLit__33111; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33112 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__33112; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33113 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__33113; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33114 = ::x10aux::makeStringLit("P_eM"); strLit__33114; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33115 = ::x10aux::makeStringLit("ep_mode"); strLit__33115; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33116 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__33116; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33117 = ::x10aux::makeStringLit("P_lmM"); strLit__33117; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33118 = ::x10aux::makeStringLit("lmp_mode"); strLit__33118; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33119 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__33119; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33120 = ::x10aux::makeStringLit("P_eD"); strLit__33120; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33121 = ::x10aux::makeStringLit("ep_dist"); strLit__33121; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33122 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__33122; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33123 = ::x10aux::makeStringLit("P_lmD"); strLit__33123; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33124 = ::x10aux::makeStringLit("lmp_dist"); strLit__33124; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33125 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__33125; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33126 = ::x10aux::makeStringLit("mt"); strLit__33126; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33127 = ::x10aux::makeStringLit("max_time"); strLit__33127; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33128 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__33128; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33129 = ::x10aux::makeStringLit("mi"); strLit__33129; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33130 = ::x10aux::makeStringLit("max_iter"); strLit__33130; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33131 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__33131; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33132 = ::x10aux::makeStringLit("mr"); strLit__33132; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33133 = ::x10aux::makeStringLit("max_restart"); strLit__33133; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33134 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__33134; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33135 = ::x10aux::makeStringLit("rp"); strLit__33135; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33136 = ::x10aux::makeStringLit("rep_partial"); strLit__33136; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33137 = ::x10aux::makeStringLit("report partial results"); strLit__33137; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33138 = ::x10aux::makeStringLit("dbg"); strLit__33138; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33139 = ::x10aux::makeStringLit("debug_terminal"); strLit__33139; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33140 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__33140; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33141 = ::x10aux::makeStringLit("AS_vtr"); strLit__33141; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33142 = ::x10aux::makeStringLit("AS_varToReset"); strLit__33142; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33143 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__33143; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33144 = ::x10aux::makeStringLit("AS_rp"); strLit__33144; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33145 = ::x10aux::makeStringLit("AS_resetPer"); strLit__33145; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33146 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__33146; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33147 = ::x10aux::makeStringLit("AS_flm"); strLit__33147; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33148 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__33148; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33149 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__33149; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33150 = ::x10aux::makeStringLit("AS_fs"); strLit__33150; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33151 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__33151; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33152 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__33152; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33153 = ::x10aux::makeStringLit("AS_rl"); strLit__33153; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33154 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__33154; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33155 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__33155; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33156 = ::x10aux::makeStringLit("AS_plm"); strLit__33156; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33157 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__33157; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33158 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__33158; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33159 = ::x10aux::makeStringLit("AS_e"); strLit__33159; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33160 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__33160; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33161 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__33161; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33162 = ::x10aux::makeStringLit("AS_fb"); strLit__33162; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33163 = ::x10aux::makeStringLit("AS_firstBest"); strLit__33163; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33164 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__33164; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33165 = ::x10aux::makeStringLit("EO_t"); strLit__33165; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33166 = ::x10aux::makeStringLit("EO_tau"); strLit__33166; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33167 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__33167; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33168 = ::x10aux::makeStringLit("EO_p"); strLit__33168; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33169 = ::x10aux::makeStringLit("EO_pdf"); strLit__33169; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33170 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__33170; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33171 = ::x10aux::makeStringLit("EO_ss"); strLit__33171; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33172 = ::x10aux::makeStringLit("EO_selSec"); strLit__33172; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33173 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__33173; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33174 = ::x10aux::makeStringLit("RoTS_t"); strLit__33174; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33175 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__33175; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33176 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__33176; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33177 = ::x10aux::makeStringLit("RoTS_a"); strLit__33177; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33178 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__33178; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33179 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__33179; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33180 = ::x10aux::makeStringLit("GA_pz"); strLit__33180; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33181 = ::x10aux::makeStringLit("GA_population_size"); strLit__33181; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33182 = ::x10aux::makeStringLit("Set the population size. Default 2*n"); strLit__33182; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33183 = ::x10aux::makeStringLit("if"); strLit__33183; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33184 = ::x10aux::makeStringLit("input_vector_file"); strLit__33184; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33185 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__33185; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33186 = ::x10aux::makeStringLit("bv"); strLit__33186; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33187 = ::x10aux::makeStringLit("model_baseValue"); strLit__33187; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33188 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__33188; }))));
                                                         t__32923->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)52ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33189 = ::x10aux::makeStringLit("LNP_k"); strLit__33189; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33190 = ::x10aux::makeStringLit("LNP_k"); strLit__33190; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33191 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__33191; }))));
                                                         t__32923;
                                                     }))
                                                     );
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__33192 = ::x10aux::makeStringLit("-pf"); strLit__33192; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__33193 = ::x10aux::makeStringLit("CPLS.param"); strLit__33193; })));
    
    //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    try {
        
        //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        this->FMGL(paramFile) = ::x10::io::File::_make(this->FMGL(paramFileName));
    }
    catch (::x10::lang::CheckedThrowable* __exc180) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc180)) {
            ::x10::io::IOException* id__6 = static_cast< ::x10::io::IOException*>(__exc180);
            {
                
                //#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
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



//#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::parseFile() {
    
    //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals(this->FMGL(paramFile), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33194 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__33194; }))));
        
        //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return;
    }
    
    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__25303;
        for (line__25303 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__25303));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__25303));
            
            //#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(line)->x10::lang::String::length(),
                                         ((x10_int)0)))) {
                continue;
            }
            
            //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals((line)->charAt(((x10_int)0)),
                                         ((x10_char)'#'))))
            {
                continue;
            }
            
            //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            x10_int sepIndex = ::x10aux::nullCheck(line)->x10::lang::String::indexOf(
                                 this->FMGL(SEPARETOR));
            
            //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* key = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                         ((x10_int)0), sepIndex);
            
            //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* value = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                           ((sepIndex) + (((x10_int)1))));
            
            //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::Rail< ::x10::lang::String* >* res =
              this->cpls::ParamManager::myGet(key);
            
            //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(res, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 114 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                continue;
            } else {
                
                //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                ::x10::lang::Any* values = this->howManyValues(
                                             key);
                
                //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                if ((::x10aux::struct_equals((::x10aux::class_cast<x10_int>(values)),
                                             ((x10_int)0))))
                {
                    
                    //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10aux::nullCheck(this->FMGL(properties))->put(
                      key, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                            value));
                    
                    //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::util::Option option = ::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                                   key, ::x10::util::Option::FMGL(BAD__get)());
                    
                    //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if ((::x10aux::struct_equals(option, ::x10::util::Option::FMGL(BAD__get)())))
                    {
                        break;
                    }
                    
                    //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::lang::String* otherForm = option->otherForm(
                                                       key);
                    
                    //#line 126 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if (((::x10aux::nullCheck(otherForm)->x10::lang::String::length()) > (((x10_int)0))))
                    {
                        ::x10aux::nullCheck(this->FMGL(properties))->put(
                          otherForm, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                                      value));
                    }
                    
                } else {
                    
                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    continue;
                }
                
            }
            
        }
    }
    
}

//#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
::x10::lang::Rail< ::x10::lang::String* >* cpls::ParamManager::myGet(
  ::x10::lang::String* key) {
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* winner = key;
    
    //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_boolean isValid = true;
    
    //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals((key)->charAt(((x10_int)0)),
                                 ((x10_char)'-')))) {
        
        //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       key, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            isValid = false;
        }
        
    } else {
        
        //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33203 = ::x10aux::makeStringLit("-"); strLit__33203; })), key);
        
        //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33206 = ::x10aux::makeStringLit("--"); strLit__33206; })), key);
            
            //#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                           winner, ::x10::util::Option::FMGL(BAD__get)()),
                                         ::x10::util::Option::FMGL(BAD__get)())))
            {
                isValid = false;
            }
            
        }
        
    }
    
    //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if (isValid) {
        return ::x10aux::nullCheck(this->FMGL(properties))->getOrElse(
                 winner, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)0ll)));
        
    } else {
        
        //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::String* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
}

//#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::printParameters() {
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* problem = this->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__33211 = ::x10aux::makeStringLit("-p"); strLit__33211; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__33212 = ::x10aux::makeStringLit("MSP"); strLit__33212; })));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__33213 = ::x10aux::makeStringLit("-f"); strLit__33213; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__33214 = ::x10aux::makeStringLit("."); strLit__33214; })));
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__33215 = ::x10aux::makeStringLit("-s"); strLit__33215; })),
                                                     ((x10_int)10));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__33216 = ::x10aux::makeStringLit("-sm"); strLit__33216; })),
                           ((x10_int)1));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__33217 = ::x10aux::makeStringLit("-mi"); strLit__33217; })),
                             ((x10_int)1000000000));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__33218 = ::x10aux::makeStringLit("-mt"); strLit__33218; })),
                         ((x10_long)0ll));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__33219 = ::x10aux::makeStringLit("-tc"); strLit__33219; })),
                            ((x10_int)0));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__33220 = ::x10aux::makeStringLit("-tf"); strLit__33220; })),
                           ((x10_long)0ll));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__33221 = ::x10aux::makeStringLit("-b"); strLit__33221; })),
                                                       ((x10_int)10));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__33222 = ::x10aux::makeStringLit("-sl"); strLit__33222; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__33223 = ::x10aux::makeStringLit("AS"); strLit__33223; })));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__33224 = ::x10aux::makeStringLit("-N"); strLit__33224; })),
                           ((x10_int)1));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__33225 = ::x10aux::makeStringLit("-U"); strLit__33225; })),
                                                        ((x10_int)0));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__33226 = ::x10aux::makeStringLit("-R"); strLit__33226; })),
                                                        ((x10_int)0));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__33227 = ::x10aux::makeStringLit("-C"); strLit__33227; })),
                           ((x10_int)100));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__33228 = ::x10aux::makeStringLit("-P_e"); strLit__33228; })),
                         ((x10_int)4));
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__33229 = ::x10aux::makeStringLit("-I"); strLit__33229; })),
                         ((x10_long)0ll));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__33230 = ::x10aux::makeStringLit("-D"); strLit__33230; })),
                               0.3);
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__33231 = ::x10aux::makeStringLit("-W"); strLit__33231; })),
                                                        ((x10_long)0ll));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__33232 = ::x10aux::makeStringLit("-A"); strLit__33232; })),
                             0.0);
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__33233 = ::x10aux::makeStringLit("-M"); strLit__33233; })),
                            ((x10_int)1));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__33234 = ::x10aux::makeStringLit("-CD"); strLit__33234; })),
                             ((x10_int)1));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__33235 = ::x10aux::makeStringLit("-if"); strLit__33235; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__33236 = ::x10aux::makeStringLit("."); strLit__33236; })));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__33237 = ::x10aux::makeStringLit("-of"); strLit__33237; })),
                          ((x10_int)1));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33238 = ::x10aux::makeStringLit(""); strLit__33238; }))));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33239 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__33239; }))));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33240 = ::x10aux::makeStringLit("Problem "); strLit__33240; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__33241 = ::x10aux::makeStringLit(" size "); strLit__33241; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__33242 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__33242; }))), filePath)));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33243 = ::x10aux::makeStringLit(""); strLit__33243; }))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33244 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__33244; }))));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33245 = ::x10aux::makeStringLit("Solver: "); strLit__33245; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__33246 = ::x10aux::makeStringLit(", Mode: "); strLit__33246; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__33247 = ::x10aux::makeStringLit("sequential"); strLit__33247; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__33248 = ::x10aux::makeStringLit("parallel"); strLit__33248; })))), (__extension__ ({ static ::x10::lang::String* strLit__33249 = ::x10aux::makeStringLit(", Limit: "); strLit__33249; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__33250 = ::x10aux::makeStringLit(" iterations or "); strLit__33250; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__33251 = ::x10aux::makeStringLit(" ms."); strLit__33251; })))));
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33252 = ::x10aux::makeStringLit("Target cost from "); strLit__33252; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__33253 = ::x10aux::makeStringLit("file. "); strLit__33253; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__33254 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__33254; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__33255 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__33255; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33256 = ::x10aux::makeStringLit(""); strLit__33256; }))));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33257 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__33257; }))));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__33258 = ::x10aux::makeStringLit("Using "); strLit__33258; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__33259 = ::x10aux::makeStringLit("Without "); strLit__33259; }))), (__extension__ ({ static ::x10::lang::String* strLit__33260 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__33260; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__33261 = ::x10aux::makeStringLit(" places. "); strLit__33261; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__33262 = ::x10aux::makeStringLit(" nodes per team "); strLit__33262; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__33263 = ::x10aux::makeStringLit(" Teams"); strLit__33263; })))));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33264 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__33264; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__33265 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__33265; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__33266 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__33266; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__33267 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__33267; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__33268 = ::x10aux::makeStringLit("%"); strLit__33268; })))));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33269 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__33269; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__33270 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__33270; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__33271 = ::x10aux::makeStringLit(" Initial delay "); strLit__33271; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__33272 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__33272; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__33273 = ::x10aux::makeStringLit("%"); strLit__33273; })))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33274 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__33274; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__33275 = ::x10aux::makeStringLit(" Change Vector "); strLit__33275; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__33276 = ::x10aux::makeStringLit(" - "); strLit__33276; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__33277 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__33277; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__33278 = ::x10aux::makeStringLit(" - "); strLit__33278; }))))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33279 = ::x10aux::makeStringLit(""); strLit__33279; }))));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33280 = ::x10aux::makeStringLit("Other Parameters:"); strLit__33280; }))));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33281 = ::x10aux::makeStringLit("Max threads "); strLit__33281; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__33282 = ::x10aux::makeStringLit(" NTHREADS "); strLit__33282; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33283 = ::x10aux::makeStringLit("Solving "); strLit__33283; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__33284 = ::x10aux::makeStringLit(" times each instance"); strLit__33284; })))));
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33285 = ::x10aux::makeStringLit(" Input vector "); strLit__33285; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__33286 = ::x10aux::makeStringLit("."); strLit__33286; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__33287 = ::x10aux::makeStringLit("not used"); strLit__33287; })))
        : (inputPath))));
    
    //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33288 = ::x10aux::makeStringLit(""); strLit__33288; }))));
}

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
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
