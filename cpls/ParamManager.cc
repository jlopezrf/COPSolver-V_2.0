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

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::_constructor(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    (this)->::x10::util::OptionsParser::_constructor(args, (__extension__ ({
                                                         
                                                         //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__37514 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__37514->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37627 = ::x10aux::makeStringLit("h"); strLit__37627; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37628 = ::x10aux::makeStringLit("help"); strLit__37628; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37629 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__37629; }))));
                                                         t__37514;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__37518 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)54ll), false);
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37630 = ::x10aux::makeStringLit("p"); strLit__37630; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37631 = ::x10aux::makeStringLit("problem"); strLit__37631; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37632 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__37632; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37633 = ::x10aux::makeStringLit("f"); strLit__37633; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37634 = ::x10aux::makeStringLit("problem_file"); strLit__37634; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37635 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__37635; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37636 = ::x10aux::makeStringLit("s"); strLit__37636; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37637 = ::x10aux::makeStringLit("size"); strLit__37637; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37638 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__37638; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37639 = ::x10aux::makeStringLit("S"); strLit__37639; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37640 = ::x10aux::makeStringLit("seed"); strLit__37640; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37641 = ::x10aux::makeStringLit("seed. Default 0"); strLit__37641; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37642 = ::x10aux::makeStringLit("sm"); strLit__37642; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37643 = ::x10aux::makeStringLit("solver_mode"); strLit__37643; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37644 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__37644; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37645 = ::x10aux::makeStringLit("ce"); strLit__37645; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37646 = ::x10aux::makeStringLit("Control Strategy"); strLit__37646; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37647 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__37647; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37648 = ::x10aux::makeStringLit("sl"); strLit__37648; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37649 = ::x10aux::makeStringLit("solver"); strLit__37649; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37650 = ::x10aux::makeStringLit("Solver to use"); strLit__37650; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37651 = ::x10aux::makeStringLit("of"); strLit__37651; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37652 = ::x10aux::makeStringLit("out_format"); strLit__37652; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37653 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__37653; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37654 = ::x10aux::makeStringLit("tf"); strLit__37654; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37655 = ::x10aux::makeStringLit("target_from"); strLit__37655; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37656 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__37656; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37657 = ::x10aux::makeStringLit("tc"); strLit__37657; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37658 = ::x10aux::makeStringLit("target_cost"); strLit__37658; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37659 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__37659; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37660 = ::x10aux::makeStringLit("b"); strLit__37660; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37661 = ::x10aux::makeStringLit("bench"); strLit__37661; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37662 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__37662; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37663 = ::x10aux::makeStringLit("pf"); strLit__37663; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37664 = ::x10aux::makeStringLit("param_file"); strLit__37664; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37665 = ::x10aux::makeStringLit("path of the parameters file"); strLit__37665; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37666 = ::x10aux::makeStringLit("v"); strLit__37666; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37667 = ::x10aux::makeStringLit("verify"); strLit__37667; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37668 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__37668; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37669 = ::x10aux::makeStringLit("ca"); strLit__37669; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37670 = ::x10aux::makeStringLit("comp_AVG"); strLit__37670; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37671 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__37671; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37672 = ::x10aux::makeStringLit("N"); strLit__37672; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37673 = ::x10aux::makeStringLit("nodes_per_team"); strLit__37673; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37674 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__37674; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37675 = ::x10aux::makeStringLit("U"); strLit__37675; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37676 = ::x10aux::makeStringLit("update"); strLit__37676; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37677 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__37677; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37678 = ::x10aux::makeStringLit("R"); strLit__37678; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37679 = ::x10aux::makeStringLit("report"); strLit__37679; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37680 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__37680; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37681 = ::x10aux::makeStringLit("C"); strLit__37681; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37682 = ::x10aux::makeStringLit("p_change_vector"); strLit__37682; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37683 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__37683; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37684 = ::x10aux::makeStringLit("I"); strLit__37684; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37685 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__37685; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37686 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__37686; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37687 = ::x10aux::makeStringLit("D"); strLit__37687; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37688 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__37688; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37689 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__37689; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37690 = ::x10aux::makeStringLit("W"); strLit__37690; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37691 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__37691; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37692 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__37692; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37693 = ::x10aux::makeStringLit("A"); strLit__37693; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37694 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__37694; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37695 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__37695; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37696 = ::x10aux::makeStringLit("O"); strLit__37696; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37697 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__37697; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37698 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__37698; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37699 = ::x10aux::makeStringLit("M"); strLit__37699; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37700 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__37700; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37701 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__37701; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37702 = ::x10aux::makeStringLit("CD"); strLit__37702; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37703 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__37703; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37704 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__37704; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37705 = ::x10aux::makeStringLit("P_e"); strLit__37705; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37706 = ::x10aux::makeStringLit("poolsize_elite"); strLit__37706; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37707 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__37707; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37708 = ::x10aux::makeStringLit("P_lm"); strLit__37708; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37709 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__37709; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37710 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__37710; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37711 = ::x10aux::makeStringLit("P_eM"); strLit__37711; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37712 = ::x10aux::makeStringLit("ep_mode"); strLit__37712; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37713 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__37713; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37714 = ::x10aux::makeStringLit("P_lmM"); strLit__37714; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37715 = ::x10aux::makeStringLit("lmp_mode"); strLit__37715; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37716 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__37716; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37717 = ::x10aux::makeStringLit("P_eD"); strLit__37717; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37718 = ::x10aux::makeStringLit("ep_dist"); strLit__37718; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37719 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__37719; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37720 = ::x10aux::makeStringLit("P_lmD"); strLit__37720; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37721 = ::x10aux::makeStringLit("lmp_dist"); strLit__37721; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37722 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__37722; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37723 = ::x10aux::makeStringLit("mt"); strLit__37723; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37724 = ::x10aux::makeStringLit("max_time"); strLit__37724; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37725 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__37725; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37726 = ::x10aux::makeStringLit("mi"); strLit__37726; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37727 = ::x10aux::makeStringLit("max_iter"); strLit__37727; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37728 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__37728; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37729 = ::x10aux::makeStringLit("mr"); strLit__37729; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37730 = ::x10aux::makeStringLit("max_restart"); strLit__37730; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37731 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__37731; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37732 = ::x10aux::makeStringLit("rp"); strLit__37732; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37733 = ::x10aux::makeStringLit("rep_partial"); strLit__37733; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37734 = ::x10aux::makeStringLit("report partial results"); strLit__37734; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37735 = ::x10aux::makeStringLit("dbg"); strLit__37735; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37736 = ::x10aux::makeStringLit("debug_terminal"); strLit__37736; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37737 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__37737; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37738 = ::x10aux::makeStringLit("AS_vtr"); strLit__37738; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37739 = ::x10aux::makeStringLit("AS_varToReset"); strLit__37739; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37740 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__37740; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37741 = ::x10aux::makeStringLit("AS_rp"); strLit__37741; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37742 = ::x10aux::makeStringLit("AS_resetPer"); strLit__37742; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37743 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__37743; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37744 = ::x10aux::makeStringLit("AS_flm"); strLit__37744; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37745 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__37745; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37746 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__37746; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37747 = ::x10aux::makeStringLit("AS_fs"); strLit__37747; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37748 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__37748; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37749 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__37749; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37750 = ::x10aux::makeStringLit("AS_rl"); strLit__37750; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37751 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__37751; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37752 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__37752; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37753 = ::x10aux::makeStringLit("AS_plm"); strLit__37753; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37754 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__37754; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37755 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__37755; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37756 = ::x10aux::makeStringLit("AS_e"); strLit__37756; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37757 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__37757; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37758 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__37758; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37759 = ::x10aux::makeStringLit("AS_fb"); strLit__37759; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37760 = ::x10aux::makeStringLit("AS_firstBest"); strLit__37760; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37761 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__37761; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37762 = ::x10aux::makeStringLit("EO_t"); strLit__37762; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37763 = ::x10aux::makeStringLit("EO_tau"); strLit__37763; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37764 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__37764; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37765 = ::x10aux::makeStringLit("EO_p"); strLit__37765; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37766 = ::x10aux::makeStringLit("EO_pdf"); strLit__37766; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37767 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__37767; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37768 = ::x10aux::makeStringLit("EO_ss"); strLit__37768; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37769 = ::x10aux::makeStringLit("EO_selSec"); strLit__37769; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37770 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__37770; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37771 = ::x10aux::makeStringLit("RoTS_t"); strLit__37771; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37772 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__37772; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37773 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__37773; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37774 = ::x10aux::makeStringLit("RoTS_a"); strLit__37774; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37775 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__37775; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37776 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__37776; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37777 = ::x10aux::makeStringLit("GA_pz"); strLit__37777; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37778 = ::x10aux::makeStringLit("GA_population_size"); strLit__37778; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37779 = ::x10aux::makeStringLit("Set the population size. Default 2*n"); strLit__37779; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37780 = ::x10aux::makeStringLit("GA_mr"); strLit__37780; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37781 = ::x10aux::makeStringLit("GA_mutation_rate"); strLit__37781; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37782 = ::x10aux::makeStringLit("Set the mutation rate. Default 40\\%"); strLit__37782; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37783 = ::x10aux::makeStringLit("if"); strLit__37783; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37784 = ::x10aux::makeStringLit("input_vector_file"); strLit__37784; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37785 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__37785; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)52ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37786 = ::x10aux::makeStringLit("bv"); strLit__37786; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37787 = ::x10aux::makeStringLit("model_baseValue"); strLit__37787; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37788 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__37788; }))));
                                                         t__37518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)53ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__37789 = ::x10aux::makeStringLit("LNP_k"); strLit__37789; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37790 = ::x10aux::makeStringLit("LNP_k"); strLit__37790; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__37791 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__37791; }))));
                                                         t__37518;
                                                     }))
                                                     );
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__37792 = ::x10aux::makeStringLit("-pf"); strLit__37792; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__37793 = ::x10aux::makeStringLit("CPLS.param"); strLit__37793; })));
    
    //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    try {
        
        //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        this->FMGL(paramFile) = ::x10::io::File::_make(this->FMGL(paramFileName));
    }
    catch (::x10::lang::CheckedThrowable* __exc188) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc188)) {
            ::x10::io::IOException* id__4 = static_cast< ::x10::io::IOException*>(__exc188);
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
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__37794 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__37794; }))));
        
        //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return;
    }
    
    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__29042;
        for (line__29042 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__29042));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__29042));
            
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
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__37803 = ::x10aux::makeStringLit("-"); strLit__37803; })), key);
        
        //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__37806 = ::x10aux::makeStringLit("--"); strLit__37806; })), key);
            
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
                                     (__extension__ ({ static ::x10::lang::String* strLit__37811 = ::x10aux::makeStringLit("-p"); strLit__37811; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__37812 = ::x10aux::makeStringLit("MSP"); strLit__37812; })));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__37813 = ::x10aux::makeStringLit("-f"); strLit__37813; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__37814 = ::x10aux::makeStringLit("."); strLit__37814; })));
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__37815 = ::x10aux::makeStringLit("-s"); strLit__37815; })),
                                                     ((x10_int)10));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__37816 = ::x10aux::makeStringLit("-sm"); strLit__37816; })),
                           ((x10_int)1));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__37817 = ::x10aux::makeStringLit("-mi"); strLit__37817; })),
                             ((x10_int)1000000000));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__37818 = ::x10aux::makeStringLit("-mt"); strLit__37818; })),
                         ((x10_long)0ll));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__37819 = ::x10aux::makeStringLit("-tc"); strLit__37819; })),
                            ((x10_int)0));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__37820 = ::x10aux::makeStringLit("-tf"); strLit__37820; })),
                           ((x10_long)0ll));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__37821 = ::x10aux::makeStringLit("-b"); strLit__37821; })),
                                                       ((x10_int)10));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__37822 = ::x10aux::makeStringLit("-sl"); strLit__37822; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__37823 = ::x10aux::makeStringLit("AS"); strLit__37823; })));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__37824 = ::x10aux::makeStringLit("-N"); strLit__37824; })),
                           ((x10_int)1));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__37825 = ::x10aux::makeStringLit("-U"); strLit__37825; })),
                                                        ((x10_int)0));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__37826 = ::x10aux::makeStringLit("-R"); strLit__37826; })),
                                                        ((x10_int)0));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__37827 = ::x10aux::makeStringLit("-C"); strLit__37827; })),
                           ((x10_int)100));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__37828 = ::x10aux::makeStringLit("-P_e"); strLit__37828; })),
                         ((x10_int)4));
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__37829 = ::x10aux::makeStringLit("-I"); strLit__37829; })),
                         ((x10_long)0ll));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__37830 = ::x10aux::makeStringLit("-D"); strLit__37830; })),
                               0.3);
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__37831 = ::x10aux::makeStringLit("-W"); strLit__37831; })),
                                                        ((x10_long)0ll));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__37832 = ::x10aux::makeStringLit("-A"); strLit__37832; })),
                             0.0);
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__37833 = ::x10aux::makeStringLit("-M"); strLit__37833; })),
                            ((x10_int)1));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__37834 = ::x10aux::makeStringLit("-CD"); strLit__37834; })),
                             ((x10_int)1));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__37835 = ::x10aux::makeStringLit("-if"); strLit__37835; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__37836 = ::x10aux::makeStringLit("."); strLit__37836; })));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__37837 = ::x10aux::makeStringLit("-of"); strLit__37837; })),
                          ((x10_int)1));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__37838 = ::x10aux::makeStringLit(""); strLit__37838; }))));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__37839 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__37839; }))));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__37840 = ::x10aux::makeStringLit("Problem "); strLit__37840; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__37841 = ::x10aux::makeStringLit(" size "); strLit__37841; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__37842 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__37842; }))), filePath)));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__37843 = ::x10aux::makeStringLit(""); strLit__37843; }))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__37844 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__37844; }))));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__37845 = ::x10aux::makeStringLit("Solver: "); strLit__37845; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__37846 = ::x10aux::makeStringLit(", Mode: "); strLit__37846; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__37847 = ::x10aux::makeStringLit("sequential"); strLit__37847; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__37848 = ::x10aux::makeStringLit("parallel"); strLit__37848; })))), (__extension__ ({ static ::x10::lang::String* strLit__37849 = ::x10aux::makeStringLit(", Limit: "); strLit__37849; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__37850 = ::x10aux::makeStringLit(" iterations or "); strLit__37850; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__37851 = ::x10aux::makeStringLit(" ms."); strLit__37851; })))));
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__37852 = ::x10aux::makeStringLit("Target cost from "); strLit__37852; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__37853 = ::x10aux::makeStringLit("file. "); strLit__37853; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__37854 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__37854; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__37855 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__37855; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__37856 = ::x10aux::makeStringLit(""); strLit__37856; }))));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__37857 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__37857; }))));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__37858 = ::x10aux::makeStringLit("Using "); strLit__37858; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__37859 = ::x10aux::makeStringLit("Without "); strLit__37859; }))), (__extension__ ({ static ::x10::lang::String* strLit__37860 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__37860; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__37861 = ::x10aux::makeStringLit(" places. "); strLit__37861; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__37862 = ::x10aux::makeStringLit(" nodes per team "); strLit__37862; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__37863 = ::x10aux::makeStringLit(" Teams"); strLit__37863; })))));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__37864 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__37864; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__37865 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__37865; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__37866 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__37866; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__37867 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__37867; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__37868 = ::x10aux::makeStringLit("%"); strLit__37868; })))));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__37869 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__37869; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__37870 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__37870; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__37871 = ::x10aux::makeStringLit(" Initial delay "); strLit__37871; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__37872 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__37872; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__37873 = ::x10aux::makeStringLit("%"); strLit__37873; })))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__37874 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__37874; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__37875 = ::x10aux::makeStringLit(" Change Vector "); strLit__37875; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__37876 = ::x10aux::makeStringLit(" - "); strLit__37876; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__37877 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__37877; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__37878 = ::x10aux::makeStringLit(" - "); strLit__37878; }))))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__37879 = ::x10aux::makeStringLit(""); strLit__37879; }))));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__37880 = ::x10aux::makeStringLit("Other Parameters:"); strLit__37880; }))));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__37881 = ::x10aux::makeStringLit("Max threads "); strLit__37881; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__37882 = ::x10aux::makeStringLit(" NTHREADS "); strLit__37882; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__37883 = ::x10aux::makeStringLit("Solving "); strLit__37883; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__37884 = ::x10aux::makeStringLit(" times each instance"); strLit__37884; })))));
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__37885 = ::x10aux::makeStringLit(" Input vector "); strLit__37885; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__37886 = ::x10aux::makeStringLit("."); strLit__37886; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__37887 = ::x10aux::makeStringLit("not used"); strLit__37887; })))
        : (inputPath))));
    
    //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__37888 = ::x10aux::makeStringLit(""); strLit__37888; }))));
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
