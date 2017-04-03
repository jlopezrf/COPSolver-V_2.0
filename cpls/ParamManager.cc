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
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__33501 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__33501->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33612 = ::x10aux::makeStringLit("h"); strLit__33612; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33613 = ::x10aux::makeStringLit("help"); strLit__33613; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33614 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__33614; }))));
                                                         t__33501;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__33505 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)53ll), false);
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33615 = ::x10aux::makeStringLit("p"); strLit__33615; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33616 = ::x10aux::makeStringLit("problem"); strLit__33616; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33617 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__33617; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33618 = ::x10aux::makeStringLit("f"); strLit__33618; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33619 = ::x10aux::makeStringLit("problem_file"); strLit__33619; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33620 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__33620; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33621 = ::x10aux::makeStringLit("s"); strLit__33621; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33622 = ::x10aux::makeStringLit("size"); strLit__33622; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33623 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__33623; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33624 = ::x10aux::makeStringLit("S"); strLit__33624; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33625 = ::x10aux::makeStringLit("seed"); strLit__33625; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33626 = ::x10aux::makeStringLit("seed. Default 0"); strLit__33626; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33627 = ::x10aux::makeStringLit("sm"); strLit__33627; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33628 = ::x10aux::makeStringLit("solver_mode"); strLit__33628; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33629 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__33629; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33630 = ::x10aux::makeStringLit("ce"); strLit__33630; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33631 = ::x10aux::makeStringLit("Control Strategy"); strLit__33631; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33632 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__33632; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33633 = ::x10aux::makeStringLit("sl"); strLit__33633; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33634 = ::x10aux::makeStringLit("solver"); strLit__33634; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33635 = ::x10aux::makeStringLit("Solver to use"); strLit__33635; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33636 = ::x10aux::makeStringLit("of"); strLit__33636; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33637 = ::x10aux::makeStringLit("out_format"); strLit__33637; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33638 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__33638; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33639 = ::x10aux::makeStringLit("tf"); strLit__33639; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33640 = ::x10aux::makeStringLit("target_from"); strLit__33640; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33641 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__33641; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33642 = ::x10aux::makeStringLit("tc"); strLit__33642; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33643 = ::x10aux::makeStringLit("target_cost"); strLit__33643; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33644 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__33644; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33645 = ::x10aux::makeStringLit("b"); strLit__33645; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33646 = ::x10aux::makeStringLit("bench"); strLit__33646; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33647 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__33647; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33648 = ::x10aux::makeStringLit("pf"); strLit__33648; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33649 = ::x10aux::makeStringLit("param_file"); strLit__33649; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33650 = ::x10aux::makeStringLit("path of the parameters file"); strLit__33650; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33651 = ::x10aux::makeStringLit("v"); strLit__33651; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33652 = ::x10aux::makeStringLit("verify"); strLit__33652; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33653 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__33653; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33654 = ::x10aux::makeStringLit("ca"); strLit__33654; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33655 = ::x10aux::makeStringLit("comp_AVG"); strLit__33655; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33656 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__33656; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33657 = ::x10aux::makeStringLit("N"); strLit__33657; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33658 = ::x10aux::makeStringLit("nodes_per_team"); strLit__33658; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33659 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__33659; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33660 = ::x10aux::makeStringLit("U"); strLit__33660; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33661 = ::x10aux::makeStringLit("update"); strLit__33661; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33662 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__33662; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33663 = ::x10aux::makeStringLit("R"); strLit__33663; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33664 = ::x10aux::makeStringLit("report"); strLit__33664; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33665 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__33665; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33666 = ::x10aux::makeStringLit("C"); strLit__33666; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33667 = ::x10aux::makeStringLit("p_change_vector"); strLit__33667; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33668 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__33668; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33669 = ::x10aux::makeStringLit("I"); strLit__33669; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33670 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__33670; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33671 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__33671; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33672 = ::x10aux::makeStringLit("D"); strLit__33672; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33673 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__33673; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33674 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__33674; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33675 = ::x10aux::makeStringLit("W"); strLit__33675; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33676 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__33676; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33677 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__33677; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33678 = ::x10aux::makeStringLit("A"); strLit__33678; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33679 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__33679; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33680 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__33680; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33681 = ::x10aux::makeStringLit("O"); strLit__33681; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33682 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__33682; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33683 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__33683; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33684 = ::x10aux::makeStringLit("M"); strLit__33684; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33685 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__33685; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33686 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__33686; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33687 = ::x10aux::makeStringLit("CD"); strLit__33687; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33688 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__33688; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33689 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__33689; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33690 = ::x10aux::makeStringLit("P_e"); strLit__33690; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33691 = ::x10aux::makeStringLit("poolsize_elite"); strLit__33691; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33692 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__33692; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33693 = ::x10aux::makeStringLit("P_lm"); strLit__33693; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33694 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__33694; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33695 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__33695; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33696 = ::x10aux::makeStringLit("P_eM"); strLit__33696; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33697 = ::x10aux::makeStringLit("ep_mode"); strLit__33697; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33698 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__33698; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33699 = ::x10aux::makeStringLit("P_lmM"); strLit__33699; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33700 = ::x10aux::makeStringLit("lmp_mode"); strLit__33700; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33701 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__33701; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33702 = ::x10aux::makeStringLit("P_eD"); strLit__33702; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33703 = ::x10aux::makeStringLit("ep_dist"); strLit__33703; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33704 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__33704; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33705 = ::x10aux::makeStringLit("P_lmD"); strLit__33705; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33706 = ::x10aux::makeStringLit("lmp_dist"); strLit__33706; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33707 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__33707; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33708 = ::x10aux::makeStringLit("mt"); strLit__33708; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33709 = ::x10aux::makeStringLit("max_time"); strLit__33709; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33710 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__33710; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33711 = ::x10aux::makeStringLit("mi"); strLit__33711; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33712 = ::x10aux::makeStringLit("max_iter"); strLit__33712; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33713 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__33713; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33714 = ::x10aux::makeStringLit("mr"); strLit__33714; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33715 = ::x10aux::makeStringLit("max_restart"); strLit__33715; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33716 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__33716; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33717 = ::x10aux::makeStringLit("rp"); strLit__33717; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33718 = ::x10aux::makeStringLit("rep_partial"); strLit__33718; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33719 = ::x10aux::makeStringLit("report partial results"); strLit__33719; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33720 = ::x10aux::makeStringLit("dbg"); strLit__33720; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33721 = ::x10aux::makeStringLit("debug_terminal"); strLit__33721; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33722 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__33722; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33723 = ::x10aux::makeStringLit("AS_vtr"); strLit__33723; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33724 = ::x10aux::makeStringLit("AS_varToReset"); strLit__33724; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33725 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__33725; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33726 = ::x10aux::makeStringLit("AS_rp"); strLit__33726; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33727 = ::x10aux::makeStringLit("AS_resetPer"); strLit__33727; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33728 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__33728; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33729 = ::x10aux::makeStringLit("AS_flm"); strLit__33729; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33730 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__33730; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33731 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__33731; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33732 = ::x10aux::makeStringLit("AS_fs"); strLit__33732; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33733 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__33733; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33734 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__33734; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33735 = ::x10aux::makeStringLit("AS_rl"); strLit__33735; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33736 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__33736; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33737 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__33737; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33738 = ::x10aux::makeStringLit("AS_plm"); strLit__33738; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33739 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__33739; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33740 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__33740; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33741 = ::x10aux::makeStringLit("AS_e"); strLit__33741; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33742 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__33742; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33743 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__33743; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33744 = ::x10aux::makeStringLit("AS_fb"); strLit__33744; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33745 = ::x10aux::makeStringLit("AS_firstBest"); strLit__33745; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33746 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__33746; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33747 = ::x10aux::makeStringLit("EO_t"); strLit__33747; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33748 = ::x10aux::makeStringLit("EO_tau"); strLit__33748; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33749 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__33749; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33750 = ::x10aux::makeStringLit("EO_p"); strLit__33750; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33751 = ::x10aux::makeStringLit("EO_pdf"); strLit__33751; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33752 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__33752; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33753 = ::x10aux::makeStringLit("EO_ss"); strLit__33753; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33754 = ::x10aux::makeStringLit("EO_selSec"); strLit__33754; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33755 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__33755; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33756 = ::x10aux::makeStringLit("RoTS_t"); strLit__33756; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33757 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__33757; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33758 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__33758; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33759 = ::x10aux::makeStringLit("RoTS_a"); strLit__33759; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33760 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__33760; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33761 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__33761; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33762 = ::x10aux::makeStringLit("GA_pz"); strLit__33762; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33763 = ::x10aux::makeStringLit("GA_population_size"); strLit__33763; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33764 = ::x10aux::makeStringLit("Set the population size. Default 2*n"); strLit__33764; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33765 = ::x10aux::makeStringLit("if"); strLit__33765; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33766 = ::x10aux::makeStringLit("input_vector_file"); strLit__33766; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33767 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__33767; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33768 = ::x10aux::makeStringLit("bv"); strLit__33768; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33769 = ::x10aux::makeStringLit("model_baseValue"); strLit__33769; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33770 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__33770; }))));
                                                         t__33505->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)52ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__33771 = ::x10aux::makeStringLit("LNP_k"); strLit__33771; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33772 = ::x10aux::makeStringLit("LNP_k"); strLit__33772; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__33773 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__33773; }))));
                                                         t__33505;
                                                     }))
                                                     );
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__33774 = ::x10aux::makeStringLit("-pf"); strLit__33774; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__33775 = ::x10aux::makeStringLit("CPLS.param"); strLit__33775; })));
    
    //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    try {
        
        //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        this->FMGL(paramFile) = ::x10::io::File::_make(this->FMGL(paramFileName));
    }
    catch (::x10::lang::CheckedThrowable* __exc181) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc181)) {
            ::x10::io::IOException* id__6 = static_cast< ::x10::io::IOException*>(__exc181);
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
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33776 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__33776; }))));
        
        //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return;
    }
    
    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__25756;
        for (line__25756 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__25756));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__25756));
            
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
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33785 = ::x10aux::makeStringLit("-"); strLit__33785; })), key);
        
        //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33788 = ::x10aux::makeStringLit("--"); strLit__33788; })), key);
            
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
                                     (__extension__ ({ static ::x10::lang::String* strLit__33793 = ::x10aux::makeStringLit("-p"); strLit__33793; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__33794 = ::x10aux::makeStringLit("MSP"); strLit__33794; })));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__33795 = ::x10aux::makeStringLit("-f"); strLit__33795; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__33796 = ::x10aux::makeStringLit("."); strLit__33796; })));
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__33797 = ::x10aux::makeStringLit("-s"); strLit__33797; })),
                                                     ((x10_int)10));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__33798 = ::x10aux::makeStringLit("-sm"); strLit__33798; })),
                           ((x10_int)1));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__33799 = ::x10aux::makeStringLit("-mi"); strLit__33799; })),
                             ((x10_int)1000000000));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__33800 = ::x10aux::makeStringLit("-mt"); strLit__33800; })),
                         ((x10_long)0ll));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__33801 = ::x10aux::makeStringLit("-tc"); strLit__33801; })),
                            ((x10_int)0));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__33802 = ::x10aux::makeStringLit("-tf"); strLit__33802; })),
                           ((x10_long)0ll));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__33803 = ::x10aux::makeStringLit("-b"); strLit__33803; })),
                                                       ((x10_int)10));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__33804 = ::x10aux::makeStringLit("-sl"); strLit__33804; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__33805 = ::x10aux::makeStringLit("AS"); strLit__33805; })));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__33806 = ::x10aux::makeStringLit("-N"); strLit__33806; })),
                           ((x10_int)1));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__33807 = ::x10aux::makeStringLit("-U"); strLit__33807; })),
                                                        ((x10_int)0));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__33808 = ::x10aux::makeStringLit("-R"); strLit__33808; })),
                                                        ((x10_int)0));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__33809 = ::x10aux::makeStringLit("-C"); strLit__33809; })),
                           ((x10_int)100));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__33810 = ::x10aux::makeStringLit("-P_e"); strLit__33810; })),
                         ((x10_int)4));
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__33811 = ::x10aux::makeStringLit("-I"); strLit__33811; })),
                         ((x10_long)0ll));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__33812 = ::x10aux::makeStringLit("-D"); strLit__33812; })),
                               0.3);
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__33813 = ::x10aux::makeStringLit("-W"); strLit__33813; })),
                                                        ((x10_long)0ll));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__33814 = ::x10aux::makeStringLit("-A"); strLit__33814; })),
                             0.0);
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__33815 = ::x10aux::makeStringLit("-M"); strLit__33815; })),
                            ((x10_int)1));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__33816 = ::x10aux::makeStringLit("-CD"); strLit__33816; })),
                             ((x10_int)1));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__33817 = ::x10aux::makeStringLit("-if"); strLit__33817; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__33818 = ::x10aux::makeStringLit("."); strLit__33818; })));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__33819 = ::x10aux::makeStringLit("-of"); strLit__33819; })),
                          ((x10_int)1));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33820 = ::x10aux::makeStringLit(""); strLit__33820; }))));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33821 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__33821; }))));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33822 = ::x10aux::makeStringLit("Problem "); strLit__33822; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__33823 = ::x10aux::makeStringLit(" size "); strLit__33823; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__33824 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__33824; }))), filePath)));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33825 = ::x10aux::makeStringLit(""); strLit__33825; }))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33826 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__33826; }))));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33827 = ::x10aux::makeStringLit("Solver: "); strLit__33827; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__33828 = ::x10aux::makeStringLit(", Mode: "); strLit__33828; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__33829 = ::x10aux::makeStringLit("sequential"); strLit__33829; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__33830 = ::x10aux::makeStringLit("parallel"); strLit__33830; })))), (__extension__ ({ static ::x10::lang::String* strLit__33831 = ::x10aux::makeStringLit(", Limit: "); strLit__33831; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__33832 = ::x10aux::makeStringLit(" iterations or "); strLit__33832; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__33833 = ::x10aux::makeStringLit(" ms."); strLit__33833; })))));
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33834 = ::x10aux::makeStringLit("Target cost from "); strLit__33834; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__33835 = ::x10aux::makeStringLit("file. "); strLit__33835; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__33836 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__33836; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__33837 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__33837; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33838 = ::x10aux::makeStringLit(""); strLit__33838; }))));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33839 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__33839; }))));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__33840 = ::x10aux::makeStringLit("Using "); strLit__33840; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__33841 = ::x10aux::makeStringLit("Without "); strLit__33841; }))), (__extension__ ({ static ::x10::lang::String* strLit__33842 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__33842; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__33843 = ::x10aux::makeStringLit(" places. "); strLit__33843; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__33844 = ::x10aux::makeStringLit(" nodes per team "); strLit__33844; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__33845 = ::x10aux::makeStringLit(" Teams"); strLit__33845; })))));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33846 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__33846; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__33847 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__33847; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__33848 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__33848; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__33849 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__33849; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__33850 = ::x10aux::makeStringLit("%"); strLit__33850; })))));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33851 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__33851; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__33852 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__33852; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__33853 = ::x10aux::makeStringLit(" Initial delay "); strLit__33853; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__33854 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__33854; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__33855 = ::x10aux::makeStringLit("%"); strLit__33855; })))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33856 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__33856; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__33857 = ::x10aux::makeStringLit(" Change Vector "); strLit__33857; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__33858 = ::x10aux::makeStringLit(" - "); strLit__33858; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__33859 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__33859; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__33860 = ::x10aux::makeStringLit(" - "); strLit__33860; }))))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33861 = ::x10aux::makeStringLit(""); strLit__33861; }))));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33862 = ::x10aux::makeStringLit("Other Parameters:"); strLit__33862; }))));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33863 = ::x10aux::makeStringLit("Max threads "); strLit__33863; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__33864 = ::x10aux::makeStringLit(" NTHREADS "); strLit__33864; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33865 = ::x10aux::makeStringLit("Solving "); strLit__33865; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__33866 = ::x10aux::makeStringLit(" times each instance"); strLit__33866; })))));
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33867 = ::x10aux::makeStringLit(" Input vector "); strLit__33867; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__33868 = ::x10aux::makeStringLit("."); strLit__33868; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__33869 = ::x10aux::makeStringLit("not used"); strLit__33869; })))
        : (inputPath))));
    
    //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33870 = ::x10aux::makeStringLit(""); strLit__33870; }))));
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
