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
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__36518 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__36518->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36631 = ::x10aux::makeStringLit("h"); strLit__36631; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36632 = ::x10aux::makeStringLit("help"); strLit__36632; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36633 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__36633; }))));
                                                         t__36518;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__36522 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)54ll), false);
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36634 = ::x10aux::makeStringLit("p"); strLit__36634; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36635 = ::x10aux::makeStringLit("problem"); strLit__36635; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36636 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__36636; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36637 = ::x10aux::makeStringLit("f"); strLit__36637; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36638 = ::x10aux::makeStringLit("problem_file"); strLit__36638; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36639 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__36639; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36640 = ::x10aux::makeStringLit("s"); strLit__36640; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36641 = ::x10aux::makeStringLit("size"); strLit__36641; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36642 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__36642; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36643 = ::x10aux::makeStringLit("S"); strLit__36643; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36644 = ::x10aux::makeStringLit("seed"); strLit__36644; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36645 = ::x10aux::makeStringLit("seed. Default 0"); strLit__36645; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36646 = ::x10aux::makeStringLit("sm"); strLit__36646; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36647 = ::x10aux::makeStringLit("solver_mode"); strLit__36647; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36648 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__36648; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36649 = ::x10aux::makeStringLit("ce"); strLit__36649; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36650 = ::x10aux::makeStringLit("Control Strategy"); strLit__36650; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36651 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__36651; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36652 = ::x10aux::makeStringLit("sl"); strLit__36652; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36653 = ::x10aux::makeStringLit("solver"); strLit__36653; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36654 = ::x10aux::makeStringLit("Solver to use"); strLit__36654; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36655 = ::x10aux::makeStringLit("of"); strLit__36655; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36656 = ::x10aux::makeStringLit("out_format"); strLit__36656; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36657 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__36657; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36658 = ::x10aux::makeStringLit("tf"); strLit__36658; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36659 = ::x10aux::makeStringLit("target_from"); strLit__36659; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36660 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__36660; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36661 = ::x10aux::makeStringLit("tc"); strLit__36661; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36662 = ::x10aux::makeStringLit("target_cost"); strLit__36662; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36663 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__36663; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36664 = ::x10aux::makeStringLit("b"); strLit__36664; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36665 = ::x10aux::makeStringLit("bench"); strLit__36665; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36666 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__36666; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36667 = ::x10aux::makeStringLit("pf"); strLit__36667; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36668 = ::x10aux::makeStringLit("param_file"); strLit__36668; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36669 = ::x10aux::makeStringLit("path of the parameters file"); strLit__36669; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36670 = ::x10aux::makeStringLit("v"); strLit__36670; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36671 = ::x10aux::makeStringLit("verify"); strLit__36671; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36672 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__36672; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36673 = ::x10aux::makeStringLit("ca"); strLit__36673; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36674 = ::x10aux::makeStringLit("comp_AVG"); strLit__36674; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36675 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__36675; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36676 = ::x10aux::makeStringLit("N"); strLit__36676; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36677 = ::x10aux::makeStringLit("nodes_per_team"); strLit__36677; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36678 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__36678; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36679 = ::x10aux::makeStringLit("U"); strLit__36679; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36680 = ::x10aux::makeStringLit("update"); strLit__36680; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36681 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__36681; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36682 = ::x10aux::makeStringLit("R"); strLit__36682; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36683 = ::x10aux::makeStringLit("report"); strLit__36683; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36684 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__36684; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36685 = ::x10aux::makeStringLit("C"); strLit__36685; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36686 = ::x10aux::makeStringLit("p_change_vector"); strLit__36686; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36687 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__36687; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36688 = ::x10aux::makeStringLit("I"); strLit__36688; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36689 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__36689; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36690 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__36690; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36691 = ::x10aux::makeStringLit("D"); strLit__36691; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36692 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__36692; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36693 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__36693; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36694 = ::x10aux::makeStringLit("W"); strLit__36694; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36695 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__36695; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36696 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__36696; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36697 = ::x10aux::makeStringLit("A"); strLit__36697; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36698 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__36698; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36699 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__36699; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36700 = ::x10aux::makeStringLit("O"); strLit__36700; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36701 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__36701; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36702 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__36702; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36703 = ::x10aux::makeStringLit("M"); strLit__36703; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36704 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__36704; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36705 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__36705; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36706 = ::x10aux::makeStringLit("CD"); strLit__36706; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36707 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__36707; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36708 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__36708; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36709 = ::x10aux::makeStringLit("P_e"); strLit__36709; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36710 = ::x10aux::makeStringLit("poolsize_elite"); strLit__36710; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36711 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__36711; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36712 = ::x10aux::makeStringLit("P_lm"); strLit__36712; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36713 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__36713; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36714 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__36714; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36715 = ::x10aux::makeStringLit("P_eM"); strLit__36715; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36716 = ::x10aux::makeStringLit("ep_mode"); strLit__36716; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36717 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__36717; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36718 = ::x10aux::makeStringLit("P_lmM"); strLit__36718; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36719 = ::x10aux::makeStringLit("lmp_mode"); strLit__36719; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36720 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__36720; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36721 = ::x10aux::makeStringLit("P_eD"); strLit__36721; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36722 = ::x10aux::makeStringLit("ep_dist"); strLit__36722; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36723 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__36723; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36724 = ::x10aux::makeStringLit("P_lmD"); strLit__36724; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36725 = ::x10aux::makeStringLit("lmp_dist"); strLit__36725; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36726 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__36726; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36727 = ::x10aux::makeStringLit("mt"); strLit__36727; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36728 = ::x10aux::makeStringLit("max_time"); strLit__36728; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36729 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__36729; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36730 = ::x10aux::makeStringLit("mi"); strLit__36730; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36731 = ::x10aux::makeStringLit("max_iter"); strLit__36731; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36732 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__36732; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36733 = ::x10aux::makeStringLit("mr"); strLit__36733; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36734 = ::x10aux::makeStringLit("max_restart"); strLit__36734; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36735 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__36735; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36736 = ::x10aux::makeStringLit("rp"); strLit__36736; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36737 = ::x10aux::makeStringLit("rep_partial"); strLit__36737; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36738 = ::x10aux::makeStringLit("report partial results"); strLit__36738; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36739 = ::x10aux::makeStringLit("dbg"); strLit__36739; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36740 = ::x10aux::makeStringLit("debug_terminal"); strLit__36740; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36741 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__36741; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36742 = ::x10aux::makeStringLit("AS_vtr"); strLit__36742; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36743 = ::x10aux::makeStringLit("AS_varToReset"); strLit__36743; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36744 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__36744; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36745 = ::x10aux::makeStringLit("AS_rp"); strLit__36745; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36746 = ::x10aux::makeStringLit("AS_resetPer"); strLit__36746; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36747 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__36747; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36748 = ::x10aux::makeStringLit("AS_flm"); strLit__36748; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36749 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__36749; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36750 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__36750; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36751 = ::x10aux::makeStringLit("AS_fs"); strLit__36751; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36752 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__36752; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36753 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__36753; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36754 = ::x10aux::makeStringLit("AS_rl"); strLit__36754; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36755 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__36755; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36756 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__36756; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36757 = ::x10aux::makeStringLit("AS_plm"); strLit__36757; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36758 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__36758; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36759 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__36759; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36760 = ::x10aux::makeStringLit("AS_e"); strLit__36760; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36761 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__36761; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36762 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__36762; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36763 = ::x10aux::makeStringLit("AS_fb"); strLit__36763; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36764 = ::x10aux::makeStringLit("AS_firstBest"); strLit__36764; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36765 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__36765; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36766 = ::x10aux::makeStringLit("EO_t"); strLit__36766; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36767 = ::x10aux::makeStringLit("EO_tau"); strLit__36767; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36768 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__36768; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36769 = ::x10aux::makeStringLit("EO_p"); strLit__36769; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36770 = ::x10aux::makeStringLit("EO_pdf"); strLit__36770; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36771 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__36771; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36772 = ::x10aux::makeStringLit("EO_ss"); strLit__36772; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36773 = ::x10aux::makeStringLit("EO_selSec"); strLit__36773; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36774 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__36774; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36775 = ::x10aux::makeStringLit("RoTS_t"); strLit__36775; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36776 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__36776; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36777 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__36777; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36778 = ::x10aux::makeStringLit("RoTS_a"); strLit__36778; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36779 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__36779; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36780 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__36780; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36781 = ::x10aux::makeStringLit("GA_pz"); strLit__36781; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36782 = ::x10aux::makeStringLit("GA_population_size"); strLit__36782; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36783 = ::x10aux::makeStringLit("Set the population size. Default 2*n"); strLit__36783; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36784 = ::x10aux::makeStringLit("GA_mr"); strLit__36784; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36785 = ::x10aux::makeStringLit("GA_mutation_rate"); strLit__36785; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36786 = ::x10aux::makeStringLit("Set the mutation rate. Default 40\\%"); strLit__36786; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36787 = ::x10aux::makeStringLit("if"); strLit__36787; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36788 = ::x10aux::makeStringLit("input_vector_file"); strLit__36788; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36789 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__36789; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)52ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36790 = ::x10aux::makeStringLit("bv"); strLit__36790; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36791 = ::x10aux::makeStringLit("model_baseValue"); strLit__36791; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36792 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__36792; }))));
                                                         t__36522->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)53ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__36793 = ::x10aux::makeStringLit("LNP_k"); strLit__36793; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36794 = ::x10aux::makeStringLit("LNP_k"); strLit__36794; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__36795 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__36795; }))));
                                                         t__36522;
                                                     }))
                                                     );
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__36796 = ::x10aux::makeStringLit("-pf"); strLit__36796; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__36797 = ::x10aux::makeStringLit("CPLS.param"); strLit__36797; })));
    
    //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    try {
        
        //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        this->FMGL(paramFile) = ::x10::io::File::_make(this->FMGL(paramFileName));
    }
    catch (::x10::lang::CheckedThrowable* __exc187) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc187)) {
            ::x10::io::IOException* id__4 = static_cast< ::x10::io::IOException*>(__exc187);
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
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__36798 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__36798; }))));
        
        //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return;
    }
    
    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__28322;
        for (line__28322 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__28322));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__28322));
            
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
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__36807 = ::x10aux::makeStringLit("-"); strLit__36807; })), key);
        
        //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__36810 = ::x10aux::makeStringLit("--"); strLit__36810; })), key);
            
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
                                     (__extension__ ({ static ::x10::lang::String* strLit__36815 = ::x10aux::makeStringLit("-p"); strLit__36815; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__36816 = ::x10aux::makeStringLit("MSP"); strLit__36816; })));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__36817 = ::x10aux::makeStringLit("-f"); strLit__36817; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__36818 = ::x10aux::makeStringLit("."); strLit__36818; })));
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__36819 = ::x10aux::makeStringLit("-s"); strLit__36819; })),
                                                     ((x10_int)10));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__36820 = ::x10aux::makeStringLit("-sm"); strLit__36820; })),
                           ((x10_int)1));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__36821 = ::x10aux::makeStringLit("-mi"); strLit__36821; })),
                             ((x10_int)1000000000));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__36822 = ::x10aux::makeStringLit("-mt"); strLit__36822; })),
                         ((x10_long)0ll));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__36823 = ::x10aux::makeStringLit("-tc"); strLit__36823; })),
                            ((x10_int)0));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__36824 = ::x10aux::makeStringLit("-tf"); strLit__36824; })),
                           ((x10_long)0ll));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__36825 = ::x10aux::makeStringLit("-b"); strLit__36825; })),
                                                       ((x10_int)10));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__36826 = ::x10aux::makeStringLit("-sl"); strLit__36826; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__36827 = ::x10aux::makeStringLit("AS"); strLit__36827; })));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__36828 = ::x10aux::makeStringLit("-N"); strLit__36828; })),
                           ((x10_int)1));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__36829 = ::x10aux::makeStringLit("-U"); strLit__36829; })),
                                                        ((x10_int)0));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__36830 = ::x10aux::makeStringLit("-R"); strLit__36830; })),
                                                        ((x10_int)0));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__36831 = ::x10aux::makeStringLit("-C"); strLit__36831; })),
                           ((x10_int)100));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__36832 = ::x10aux::makeStringLit("-P_e"); strLit__36832; })),
                         ((x10_int)4));
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__36833 = ::x10aux::makeStringLit("-I"); strLit__36833; })),
                         ((x10_long)0ll));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__36834 = ::x10aux::makeStringLit("-D"); strLit__36834; })),
                               0.3);
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__36835 = ::x10aux::makeStringLit("-W"); strLit__36835; })),
                                                        ((x10_long)0ll));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__36836 = ::x10aux::makeStringLit("-A"); strLit__36836; })),
                             0.0);
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__36837 = ::x10aux::makeStringLit("-M"); strLit__36837; })),
                            ((x10_int)1));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__36838 = ::x10aux::makeStringLit("-CD"); strLit__36838; })),
                             ((x10_int)1));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__36839 = ::x10aux::makeStringLit("-if"); strLit__36839; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__36840 = ::x10aux::makeStringLit("."); strLit__36840; })));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__36841 = ::x10aux::makeStringLit("-of"); strLit__36841; })),
                          ((x10_int)1));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__36842 = ::x10aux::makeStringLit(""); strLit__36842; }))));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__36843 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__36843; }))));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__36844 = ::x10aux::makeStringLit("Problem "); strLit__36844; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__36845 = ::x10aux::makeStringLit(" size "); strLit__36845; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__36846 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__36846; }))), filePath)));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__36847 = ::x10aux::makeStringLit(""); strLit__36847; }))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__36848 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__36848; }))));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__36849 = ::x10aux::makeStringLit("Solver: "); strLit__36849; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__36850 = ::x10aux::makeStringLit(", Mode: "); strLit__36850; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__36851 = ::x10aux::makeStringLit("sequential"); strLit__36851; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__36852 = ::x10aux::makeStringLit("parallel"); strLit__36852; })))), (__extension__ ({ static ::x10::lang::String* strLit__36853 = ::x10aux::makeStringLit(", Limit: "); strLit__36853; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__36854 = ::x10aux::makeStringLit(" iterations or "); strLit__36854; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__36855 = ::x10aux::makeStringLit(" ms."); strLit__36855; })))));
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__36856 = ::x10aux::makeStringLit("Target cost from "); strLit__36856; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__36857 = ::x10aux::makeStringLit("file. "); strLit__36857; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__36858 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__36858; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__36859 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__36859; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__36860 = ::x10aux::makeStringLit(""); strLit__36860; }))));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__36861 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__36861; }))));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__36862 = ::x10aux::makeStringLit("Using "); strLit__36862; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__36863 = ::x10aux::makeStringLit("Without "); strLit__36863; }))), (__extension__ ({ static ::x10::lang::String* strLit__36864 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__36864; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__36865 = ::x10aux::makeStringLit(" places. "); strLit__36865; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__36866 = ::x10aux::makeStringLit(" nodes per team "); strLit__36866; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__36867 = ::x10aux::makeStringLit(" Teams"); strLit__36867; })))));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__36868 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__36868; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__36869 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__36869; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__36870 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__36870; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__36871 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__36871; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__36872 = ::x10aux::makeStringLit("%"); strLit__36872; })))));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__36873 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__36873; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__36874 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__36874; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__36875 = ::x10aux::makeStringLit(" Initial delay "); strLit__36875; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__36876 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__36876; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__36877 = ::x10aux::makeStringLit("%"); strLit__36877; })))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__36878 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__36878; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__36879 = ::x10aux::makeStringLit(" Change Vector "); strLit__36879; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__36880 = ::x10aux::makeStringLit(" - "); strLit__36880; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__36881 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__36881; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__36882 = ::x10aux::makeStringLit(" - "); strLit__36882; }))))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__36883 = ::x10aux::makeStringLit(""); strLit__36883; }))));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__36884 = ::x10aux::makeStringLit("Other Parameters:"); strLit__36884; }))));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__36885 = ::x10aux::makeStringLit("Max threads "); strLit__36885; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__36886 = ::x10aux::makeStringLit(" NTHREADS "); strLit__36886; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__36887 = ::x10aux::makeStringLit("Solving "); strLit__36887; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__36888 = ::x10aux::makeStringLit(" times each instance"); strLit__36888; })))));
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__36889 = ::x10aux::makeStringLit(" Input vector "); strLit__36889; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__36890 = ::x10aux::makeStringLit("."); strLit__36890; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__36891 = ::x10aux::makeStringLit("not used"); strLit__36891; })))
        : (inputPath))));
    
    //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__36892 = ::x10aux::makeStringLit(""); strLit__36892; }))));
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
