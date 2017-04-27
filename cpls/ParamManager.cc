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
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__39457 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__39457->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39570 = ::x10aux::makeStringLit("h"); strLit__39570; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39571 = ::x10aux::makeStringLit("help"); strLit__39571; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39572 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__39572; }))));
                                                         t__39457;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__39461 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)54ll), false);
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39573 = ::x10aux::makeStringLit("p"); strLit__39573; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39574 = ::x10aux::makeStringLit("problem"); strLit__39574; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39575 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__39575; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39576 = ::x10aux::makeStringLit("f"); strLit__39576; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39577 = ::x10aux::makeStringLit("problem_file"); strLit__39577; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39578 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__39578; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39579 = ::x10aux::makeStringLit("s"); strLit__39579; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39580 = ::x10aux::makeStringLit("size"); strLit__39580; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39581 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__39581; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39582 = ::x10aux::makeStringLit("S"); strLit__39582; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39583 = ::x10aux::makeStringLit("seed"); strLit__39583; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39584 = ::x10aux::makeStringLit("seed. Default 0"); strLit__39584; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39585 = ::x10aux::makeStringLit("sm"); strLit__39585; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39586 = ::x10aux::makeStringLit("solver_mode"); strLit__39586; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39587 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__39587; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39588 = ::x10aux::makeStringLit("ce"); strLit__39588; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39589 = ::x10aux::makeStringLit("Control Strategy"); strLit__39589; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39590 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__39590; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39591 = ::x10aux::makeStringLit("sl"); strLit__39591; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39592 = ::x10aux::makeStringLit("solver"); strLit__39592; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39593 = ::x10aux::makeStringLit("Solver to use"); strLit__39593; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39594 = ::x10aux::makeStringLit("of"); strLit__39594; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39595 = ::x10aux::makeStringLit("out_format"); strLit__39595; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39596 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__39596; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39597 = ::x10aux::makeStringLit("tf"); strLit__39597; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39598 = ::x10aux::makeStringLit("target_from"); strLit__39598; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39599 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__39599; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39600 = ::x10aux::makeStringLit("tc"); strLit__39600; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39601 = ::x10aux::makeStringLit("target_cost"); strLit__39601; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39602 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__39602; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39603 = ::x10aux::makeStringLit("b"); strLit__39603; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39604 = ::x10aux::makeStringLit("bench"); strLit__39604; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39605 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__39605; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39606 = ::x10aux::makeStringLit("pf"); strLit__39606; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39607 = ::x10aux::makeStringLit("param_file"); strLit__39607; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39608 = ::x10aux::makeStringLit("path of the parameters file"); strLit__39608; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39609 = ::x10aux::makeStringLit("v"); strLit__39609; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39610 = ::x10aux::makeStringLit("verify"); strLit__39610; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39611 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__39611; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39612 = ::x10aux::makeStringLit("ca"); strLit__39612; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39613 = ::x10aux::makeStringLit("comp_AVG"); strLit__39613; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39614 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__39614; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39615 = ::x10aux::makeStringLit("N"); strLit__39615; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39616 = ::x10aux::makeStringLit("nodes_per_team"); strLit__39616; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39617 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__39617; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39618 = ::x10aux::makeStringLit("U"); strLit__39618; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39619 = ::x10aux::makeStringLit("update"); strLit__39619; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39620 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__39620; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39621 = ::x10aux::makeStringLit("R"); strLit__39621; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39622 = ::x10aux::makeStringLit("report"); strLit__39622; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39623 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__39623; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39624 = ::x10aux::makeStringLit("C"); strLit__39624; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39625 = ::x10aux::makeStringLit("p_change_vector"); strLit__39625; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39626 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__39626; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39627 = ::x10aux::makeStringLit("I"); strLit__39627; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39628 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__39628; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39629 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__39629; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39630 = ::x10aux::makeStringLit("D"); strLit__39630; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39631 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__39631; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39632 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__39632; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39633 = ::x10aux::makeStringLit("W"); strLit__39633; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39634 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__39634; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39635 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__39635; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39636 = ::x10aux::makeStringLit("A"); strLit__39636; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39637 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__39637; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39638 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__39638; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39639 = ::x10aux::makeStringLit("O"); strLit__39639; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39640 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__39640; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39641 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__39641; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39642 = ::x10aux::makeStringLit("M"); strLit__39642; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39643 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__39643; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39644 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__39644; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39645 = ::x10aux::makeStringLit("CD"); strLit__39645; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39646 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__39646; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39647 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__39647; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39648 = ::x10aux::makeStringLit("P_e"); strLit__39648; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39649 = ::x10aux::makeStringLit("poolsize_elite"); strLit__39649; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39650 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__39650; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39651 = ::x10aux::makeStringLit("P_lm"); strLit__39651; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39652 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__39652; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39653 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__39653; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39654 = ::x10aux::makeStringLit("P_eM"); strLit__39654; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39655 = ::x10aux::makeStringLit("ep_mode"); strLit__39655; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39656 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__39656; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39657 = ::x10aux::makeStringLit("P_lmM"); strLit__39657; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39658 = ::x10aux::makeStringLit("lmp_mode"); strLit__39658; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39659 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__39659; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39660 = ::x10aux::makeStringLit("P_eD"); strLit__39660; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39661 = ::x10aux::makeStringLit("ep_dist"); strLit__39661; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39662 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__39662; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39663 = ::x10aux::makeStringLit("P_lmD"); strLit__39663; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39664 = ::x10aux::makeStringLit("lmp_dist"); strLit__39664; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39665 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__39665; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39666 = ::x10aux::makeStringLit("mt"); strLit__39666; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39667 = ::x10aux::makeStringLit("max_time"); strLit__39667; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39668 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__39668; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39669 = ::x10aux::makeStringLit("mi"); strLit__39669; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39670 = ::x10aux::makeStringLit("max_iter"); strLit__39670; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39671 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__39671; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39672 = ::x10aux::makeStringLit("mr"); strLit__39672; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39673 = ::x10aux::makeStringLit("max_restart"); strLit__39673; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39674 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__39674; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39675 = ::x10aux::makeStringLit("rp"); strLit__39675; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39676 = ::x10aux::makeStringLit("rep_partial"); strLit__39676; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39677 = ::x10aux::makeStringLit("report partial results"); strLit__39677; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39678 = ::x10aux::makeStringLit("dbg"); strLit__39678; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39679 = ::x10aux::makeStringLit("debug_terminal"); strLit__39679; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39680 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__39680; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39681 = ::x10aux::makeStringLit("AS_vtr"); strLit__39681; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39682 = ::x10aux::makeStringLit("AS_varToReset"); strLit__39682; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39683 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__39683; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39684 = ::x10aux::makeStringLit("AS_rp"); strLit__39684; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39685 = ::x10aux::makeStringLit("AS_resetPer"); strLit__39685; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39686 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__39686; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39687 = ::x10aux::makeStringLit("AS_flm"); strLit__39687; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39688 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__39688; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39689 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__39689; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39690 = ::x10aux::makeStringLit("AS_fs"); strLit__39690; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39691 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__39691; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39692 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__39692; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39693 = ::x10aux::makeStringLit("AS_rl"); strLit__39693; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39694 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__39694; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39695 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__39695; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39696 = ::x10aux::makeStringLit("AS_plm"); strLit__39696; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39697 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__39697; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39698 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__39698; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39699 = ::x10aux::makeStringLit("AS_e"); strLit__39699; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39700 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__39700; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39701 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__39701; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39702 = ::x10aux::makeStringLit("AS_fb"); strLit__39702; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39703 = ::x10aux::makeStringLit("AS_firstBest"); strLit__39703; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39704 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__39704; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39705 = ::x10aux::makeStringLit("EO_t"); strLit__39705; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39706 = ::x10aux::makeStringLit("EO_tau"); strLit__39706; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39707 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__39707; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39708 = ::x10aux::makeStringLit("EO_p"); strLit__39708; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39709 = ::x10aux::makeStringLit("EO_pdf"); strLit__39709; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39710 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__39710; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39711 = ::x10aux::makeStringLit("EO_ss"); strLit__39711; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39712 = ::x10aux::makeStringLit("EO_selSec"); strLit__39712; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39713 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__39713; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39714 = ::x10aux::makeStringLit("RoTS_t"); strLit__39714; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39715 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__39715; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39716 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__39716; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39717 = ::x10aux::makeStringLit("RoTS_a"); strLit__39717; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39718 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__39718; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39719 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__39719; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39720 = ::x10aux::makeStringLit("GA_pz"); strLit__39720; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39721 = ::x10aux::makeStringLit("GA_population_size"); strLit__39721; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39722 = ::x10aux::makeStringLit("Set the population size. Default 2*n"); strLit__39722; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39723 = ::x10aux::makeStringLit("GA_mr"); strLit__39723; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39724 = ::x10aux::makeStringLit("GA_mutation_rate"); strLit__39724; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39725 = ::x10aux::makeStringLit("Set the mutation rate. Default 40\\%"); strLit__39725; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39726 = ::x10aux::makeStringLit("if"); strLit__39726; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39727 = ::x10aux::makeStringLit("input_vector_file"); strLit__39727; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39728 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__39728; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)52ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39729 = ::x10aux::makeStringLit("bv"); strLit__39729; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39730 = ::x10aux::makeStringLit("model_baseValue"); strLit__39730; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39731 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__39731; }))));
                                                         t__39461->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)53ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39732 = ::x10aux::makeStringLit("LNP_k"); strLit__39732; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39733 = ::x10aux::makeStringLit("LNP_k"); strLit__39733; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39734 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__39734; }))));
                                                         t__39461;
                                                     }))
                                                     );
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__39735 = ::x10aux::makeStringLit("-pf"); strLit__39735; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__39736 = ::x10aux::makeStringLit("CPLS.param"); strLit__39736; })));
    
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
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39737 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__39737; }))));
        
        //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return;
    }
    
    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__31210;
        for (line__31210 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__31210));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__31210));
            
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
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39746 = ::x10aux::makeStringLit("-"); strLit__39746; })), key);
        
        //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39749 = ::x10aux::makeStringLit("--"); strLit__39749; })), key);
            
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
                                     (__extension__ ({ static ::x10::lang::String* strLit__39754 = ::x10aux::makeStringLit("-p"); strLit__39754; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__39755 = ::x10aux::makeStringLit("MSP"); strLit__39755; })));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__39756 = ::x10aux::makeStringLit("-f"); strLit__39756; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__39757 = ::x10aux::makeStringLit("."); strLit__39757; })));
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__39758 = ::x10aux::makeStringLit("-s"); strLit__39758; })),
                                                     ((x10_int)10));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__39759 = ::x10aux::makeStringLit("-sm"); strLit__39759; })),
                           ((x10_int)1));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__39760 = ::x10aux::makeStringLit("-mi"); strLit__39760; })),
                             ((x10_int)1000000000));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__39761 = ::x10aux::makeStringLit("-mt"); strLit__39761; })),
                         ((x10_long)0ll));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__39762 = ::x10aux::makeStringLit("-tc"); strLit__39762; })),
                            ((x10_int)0));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__39763 = ::x10aux::makeStringLit("-tf"); strLit__39763; })),
                           ((x10_long)0ll));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__39764 = ::x10aux::makeStringLit("-b"); strLit__39764; })),
                                                       ((x10_int)10));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__39765 = ::x10aux::makeStringLit("-sl"); strLit__39765; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__39766 = ::x10aux::makeStringLit("AS"); strLit__39766; })));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__39767 = ::x10aux::makeStringLit("-N"); strLit__39767; })),
                           ((x10_int)1));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__39768 = ::x10aux::makeStringLit("-U"); strLit__39768; })),
                                                        ((x10_int)0));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__39769 = ::x10aux::makeStringLit("-R"); strLit__39769; })),
                                                        ((x10_int)0));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__39770 = ::x10aux::makeStringLit("-C"); strLit__39770; })),
                           ((x10_int)100));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__39771 = ::x10aux::makeStringLit("-P_e"); strLit__39771; })),
                         ((x10_int)4));
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__39772 = ::x10aux::makeStringLit("-I"); strLit__39772; })),
                         ((x10_long)0ll));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__39773 = ::x10aux::makeStringLit("-D"); strLit__39773; })),
                               0.3);
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__39774 = ::x10aux::makeStringLit("-W"); strLit__39774; })),
                                                        ((x10_long)0ll));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__39775 = ::x10aux::makeStringLit("-A"); strLit__39775; })),
                             0.0);
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__39776 = ::x10aux::makeStringLit("-M"); strLit__39776; })),
                            ((x10_int)1));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__39777 = ::x10aux::makeStringLit("-CD"); strLit__39777; })),
                             ((x10_int)1));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__39778 = ::x10aux::makeStringLit("-if"); strLit__39778; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__39779 = ::x10aux::makeStringLit("."); strLit__39779; })));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__39780 = ::x10aux::makeStringLit("-of"); strLit__39780; })),
                          ((x10_int)1));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39781 = ::x10aux::makeStringLit(""); strLit__39781; }))));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39782 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__39782; }))));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39783 = ::x10aux::makeStringLit("Problem "); strLit__39783; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__39784 = ::x10aux::makeStringLit(" size "); strLit__39784; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__39785 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__39785; }))), filePath)));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39786 = ::x10aux::makeStringLit(""); strLit__39786; }))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39787 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__39787; }))));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39788 = ::x10aux::makeStringLit("Solver: "); strLit__39788; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__39789 = ::x10aux::makeStringLit(", Mode: "); strLit__39789; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39790 = ::x10aux::makeStringLit("sequential"); strLit__39790; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__39791 = ::x10aux::makeStringLit("parallel"); strLit__39791; })))), (__extension__ ({ static ::x10::lang::String* strLit__39792 = ::x10aux::makeStringLit(", Limit: "); strLit__39792; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__39793 = ::x10aux::makeStringLit(" iterations or "); strLit__39793; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__39794 = ::x10aux::makeStringLit(" ms."); strLit__39794; })))));
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39795 = ::x10aux::makeStringLit("Target cost from "); strLit__39795; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39796 = ::x10aux::makeStringLit("file. "); strLit__39796; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__39797 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__39797; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__39798 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__39798; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39799 = ::x10aux::makeStringLit(""); strLit__39799; }))));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39800 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__39800; }))));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39801 = ::x10aux::makeStringLit("Using "); strLit__39801; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__39802 = ::x10aux::makeStringLit("Without "); strLit__39802; }))), (__extension__ ({ static ::x10::lang::String* strLit__39803 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__39803; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__39804 = ::x10aux::makeStringLit(" places. "); strLit__39804; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__39805 = ::x10aux::makeStringLit(" nodes per team "); strLit__39805; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__39806 = ::x10aux::makeStringLit(" Teams"); strLit__39806; })))));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39807 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__39807; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__39808 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__39808; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__39809 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__39809; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__39810 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__39810; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__39811 = ::x10aux::makeStringLit("%"); strLit__39811; })))));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39812 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__39812; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__39813 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__39813; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__39814 = ::x10aux::makeStringLit(" Initial delay "); strLit__39814; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__39815 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__39815; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__39816 = ::x10aux::makeStringLit("%"); strLit__39816; })))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39817 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__39817; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39818 = ::x10aux::makeStringLit(" Change Vector "); strLit__39818; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__39819 = ::x10aux::makeStringLit(" - "); strLit__39819; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39820 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__39820; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__39821 = ::x10aux::makeStringLit(" - "); strLit__39821; }))))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39822 = ::x10aux::makeStringLit(""); strLit__39822; }))));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39823 = ::x10aux::makeStringLit("Other Parameters:"); strLit__39823; }))));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39824 = ::x10aux::makeStringLit("Max threads "); strLit__39824; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__39825 = ::x10aux::makeStringLit(" NTHREADS "); strLit__39825; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39826 = ::x10aux::makeStringLit("Solving "); strLit__39826; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__39827 = ::x10aux::makeStringLit(" times each instance"); strLit__39827; })))));
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39828 = ::x10aux::makeStringLit(" Input vector "); strLit__39828; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__39829 = ::x10aux::makeStringLit("."); strLit__39829; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39830 = ::x10aux::makeStringLit("not used"); strLit__39830; })))
        : (inputPath))));
    
    //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39831 = ::x10aux::makeStringLit(""); strLit__39831; }))));
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
