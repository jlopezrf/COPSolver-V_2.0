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
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__26443 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__26443->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26552 = ::x10aux::makeStringLit("h"); strLit__26552; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26553 = ::x10aux::makeStringLit("help"); strLit__26553; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26554 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__26554; }))));
                                                         t__26443;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__26447 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)52ll), false);
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26555 = ::x10aux::makeStringLit("p"); strLit__26555; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26556 = ::x10aux::makeStringLit("problem"); strLit__26556; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26557 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__26557; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26558 = ::x10aux::makeStringLit("f"); strLit__26558; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26559 = ::x10aux::makeStringLit("problem_file"); strLit__26559; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26560 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__26560; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26561 = ::x10aux::makeStringLit("s"); strLit__26561; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26562 = ::x10aux::makeStringLit("size"); strLit__26562; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26563 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__26563; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26564 = ::x10aux::makeStringLit("S"); strLit__26564; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26565 = ::x10aux::makeStringLit("seed"); strLit__26565; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26566 = ::x10aux::makeStringLit("seed. Default 0"); strLit__26566; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26567 = ::x10aux::makeStringLit("sm"); strLit__26567; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26568 = ::x10aux::makeStringLit("solver_mode"); strLit__26568; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26569 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__26569; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26570 = ::x10aux::makeStringLit("ce"); strLit__26570; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26571 = ::x10aux::makeStringLit("Control Strategy"); strLit__26571; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26572 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__26572; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26573 = ::x10aux::makeStringLit("sl"); strLit__26573; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26574 = ::x10aux::makeStringLit("solver"); strLit__26574; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26575 = ::x10aux::makeStringLit("Solver to use"); strLit__26575; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26576 = ::x10aux::makeStringLit("of"); strLit__26576; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26577 = ::x10aux::makeStringLit("out_format"); strLit__26577; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26578 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__26578; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26579 = ::x10aux::makeStringLit("tf"); strLit__26579; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26580 = ::x10aux::makeStringLit("target_from"); strLit__26580; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26581 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__26581; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26582 = ::x10aux::makeStringLit("tc"); strLit__26582; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26583 = ::x10aux::makeStringLit("target_cost"); strLit__26583; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26584 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__26584; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26585 = ::x10aux::makeStringLit("b"); strLit__26585; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26586 = ::x10aux::makeStringLit("bench"); strLit__26586; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26587 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__26587; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26588 = ::x10aux::makeStringLit("pf"); strLit__26588; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26589 = ::x10aux::makeStringLit("param_file"); strLit__26589; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26590 = ::x10aux::makeStringLit("path of the parameters file"); strLit__26590; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26591 = ::x10aux::makeStringLit("v"); strLit__26591; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26592 = ::x10aux::makeStringLit("verify"); strLit__26592; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26593 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__26593; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26594 = ::x10aux::makeStringLit("ca"); strLit__26594; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26595 = ::x10aux::makeStringLit("comp_AVG"); strLit__26595; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26596 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__26596; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26597 = ::x10aux::makeStringLit("N"); strLit__26597; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26598 = ::x10aux::makeStringLit("nodes_per_team"); strLit__26598; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26599 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__26599; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26600 = ::x10aux::makeStringLit("U"); strLit__26600; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26601 = ::x10aux::makeStringLit("update"); strLit__26601; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26602 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__26602; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26603 = ::x10aux::makeStringLit("R"); strLit__26603; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26604 = ::x10aux::makeStringLit("report"); strLit__26604; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26605 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__26605; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26606 = ::x10aux::makeStringLit("C"); strLit__26606; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26607 = ::x10aux::makeStringLit("p_change_vector"); strLit__26607; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26608 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__26608; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26609 = ::x10aux::makeStringLit("I"); strLit__26609; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26610 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__26610; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26611 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__26611; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26612 = ::x10aux::makeStringLit("D"); strLit__26612; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26613 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__26613; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26614 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__26614; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26615 = ::x10aux::makeStringLit("W"); strLit__26615; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26616 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__26616; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26617 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__26617; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26618 = ::x10aux::makeStringLit("A"); strLit__26618; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26619 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__26619; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26620 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__26620; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26621 = ::x10aux::makeStringLit("O"); strLit__26621; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26622 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__26622; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26623 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__26623; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26624 = ::x10aux::makeStringLit("M"); strLit__26624; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26625 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__26625; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26626 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__26626; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26627 = ::x10aux::makeStringLit("CD"); strLit__26627; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26628 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__26628; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26629 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__26629; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26630 = ::x10aux::makeStringLit("P_e"); strLit__26630; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26631 = ::x10aux::makeStringLit("poolsize_elite"); strLit__26631; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26632 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__26632; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26633 = ::x10aux::makeStringLit("P_lm"); strLit__26633; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26634 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__26634; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26635 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__26635; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26636 = ::x10aux::makeStringLit("P_eM"); strLit__26636; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26637 = ::x10aux::makeStringLit("ep_mode"); strLit__26637; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26638 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__26638; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26639 = ::x10aux::makeStringLit("P_lmM"); strLit__26639; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26640 = ::x10aux::makeStringLit("lmp_mode"); strLit__26640; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26641 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__26641; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26642 = ::x10aux::makeStringLit("P_eD"); strLit__26642; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26643 = ::x10aux::makeStringLit("ep_dist"); strLit__26643; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26644 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__26644; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26645 = ::x10aux::makeStringLit("P_lmD"); strLit__26645; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26646 = ::x10aux::makeStringLit("lmp_dist"); strLit__26646; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26647 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__26647; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26648 = ::x10aux::makeStringLit("mt"); strLit__26648; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26649 = ::x10aux::makeStringLit("max_time"); strLit__26649; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26650 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__26650; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26651 = ::x10aux::makeStringLit("mi"); strLit__26651; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26652 = ::x10aux::makeStringLit("max_iter"); strLit__26652; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26653 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__26653; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26654 = ::x10aux::makeStringLit("mr"); strLit__26654; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26655 = ::x10aux::makeStringLit("max_restart"); strLit__26655; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26656 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__26656; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26657 = ::x10aux::makeStringLit("rp"); strLit__26657; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26658 = ::x10aux::makeStringLit("rep_partial"); strLit__26658; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26659 = ::x10aux::makeStringLit("report partial results"); strLit__26659; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26660 = ::x10aux::makeStringLit("dbg"); strLit__26660; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26661 = ::x10aux::makeStringLit("debug_terminal"); strLit__26661; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26662 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__26662; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26663 = ::x10aux::makeStringLit("AS_vtr"); strLit__26663; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26664 = ::x10aux::makeStringLit("AS_varToReset"); strLit__26664; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26665 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__26665; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26666 = ::x10aux::makeStringLit("AS_rp"); strLit__26666; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26667 = ::x10aux::makeStringLit("AS_resetPer"); strLit__26667; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26668 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__26668; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26669 = ::x10aux::makeStringLit("AS_flm"); strLit__26669; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26670 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__26670; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26671 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__26671; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26672 = ::x10aux::makeStringLit("AS_fs"); strLit__26672; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26673 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__26673; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26674 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__26674; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26675 = ::x10aux::makeStringLit("AS_rl"); strLit__26675; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26676 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__26676; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26677 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__26677; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26678 = ::x10aux::makeStringLit("AS_plm"); strLit__26678; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26679 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__26679; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26680 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__26680; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26681 = ::x10aux::makeStringLit("AS_e"); strLit__26681; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26682 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__26682; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26683 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__26683; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26684 = ::x10aux::makeStringLit("AS_fb"); strLit__26684; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26685 = ::x10aux::makeStringLit("AS_firstBest"); strLit__26685; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26686 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__26686; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26687 = ::x10aux::makeStringLit("EO_t"); strLit__26687; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26688 = ::x10aux::makeStringLit("EO_tau"); strLit__26688; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26689 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__26689; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26690 = ::x10aux::makeStringLit("EO_p"); strLit__26690; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26691 = ::x10aux::makeStringLit("EO_pdf"); strLit__26691; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26692 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__26692; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26693 = ::x10aux::makeStringLit("EO_ss"); strLit__26693; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26694 = ::x10aux::makeStringLit("EO_selSec"); strLit__26694; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26695 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__26695; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26696 = ::x10aux::makeStringLit("RoTS_t"); strLit__26696; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26697 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__26697; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26698 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__26698; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26699 = ::x10aux::makeStringLit("RoTS_a"); strLit__26699; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26700 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__26700; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26701 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__26701; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26702 = ::x10aux::makeStringLit("if"); strLit__26702; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26703 = ::x10aux::makeStringLit("input_vector_file"); strLit__26703; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26704 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__26704; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26705 = ::x10aux::makeStringLit("bv"); strLit__26705; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26706 = ::x10aux::makeStringLit("model_baseValue"); strLit__26706; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26707 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__26707; }))));
                                                         t__26447->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__26708 = ::x10aux::makeStringLit("LNP_k"); strLit__26708; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26709 = ::x10aux::makeStringLit("LNP_k"); strLit__26709; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__26710 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__26710; }))));
                                                         t__26447;
                                                     }))
                                                     );
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__26711 = ::x10aux::makeStringLit("-pf"); strLit__26711; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__26712 = ::x10aux::makeStringLit("CPLS.param"); strLit__26712; })));
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    try {
        
        //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        this->FMGL(paramFile) = ::x10::io::File::_make(this->FMGL(paramFileName));
    }
    catch (::x10::lang::CheckedThrowable* __exc160) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc160)) {
            ::x10::io::IOException* id__4 = static_cast< ::x10::io::IOException*>(__exc160);
            {
                
                //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
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



//#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::parseFile() {
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals(this->FMGL(paramFile), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__26713 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__26713; }))));
        
        //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return;
    }
    
    //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__19640;
        for (line__19640 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__19640));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__19640));
            
            //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(line)->x10::lang::String::length(),
                                         ((x10_int)0)))) {
                continue;
            }
            
            //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals((line)->charAt(((x10_int)0)),
                                         ((x10_char)'#'))))
            {
                continue;
            }
            
            //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            x10_int sepIndex = ::x10aux::nullCheck(line)->x10::lang::String::indexOf(
                                 this->FMGL(SEPARETOR));
            
            //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* key = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                         ((x10_int)0), sepIndex);
            
            //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* value = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                           ((sepIndex) + (((x10_int)1))));
            
            //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::Rail< ::x10::lang::String* >* res =
              this->cpls::ParamManager::myGet(key);
            
            //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(res, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                continue;
            } else {
                
                //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                ::x10::lang::Any* values = this->howManyValues(
                                             key);
                
                //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                if ((::x10aux::struct_equals((::x10aux::class_cast<x10_int>(values)),
                                             ((x10_int)0))))
                {
                    
                    //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10aux::nullCheck(this->FMGL(properties))->put(
                      key, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                            value));
                    
                    //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::util::Option option = ::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                                   key, ::x10::util::Option::FMGL(BAD__get)());
                    
                    //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if ((::x10aux::struct_equals(option, ::x10::util::Option::FMGL(BAD__get)())))
                    {
                        break;
                    }
                    
                    //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::lang::String* otherForm = option->otherForm(
                                                       key);
                    
                    //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if (((::x10aux::nullCheck(otherForm)->x10::lang::String::length()) > (((x10_int)0))))
                    {
                        ::x10aux::nullCheck(this->FMGL(properties))->put(
                          otherForm, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                                      value));
                    }
                    
                } else {
                    
                    //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    continue;
                }
                
            }
            
        }
    }
    
}

//#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
::x10::lang::Rail< ::x10::lang::String* >* cpls::ParamManager::myGet(
  ::x10::lang::String* key) {
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* winner = key;
    
    //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_boolean isValid = true;
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals((key)->charAt(((x10_int)0)),
                                 ((x10_char)'-')))) {
        
        //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       key, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            isValid = false;
        }
        
    } else {
        
        //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26722 = ::x10aux::makeStringLit("-"); strLit__26722; })), key);
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26725 = ::x10aux::makeStringLit("--"); strLit__26725; })), key);
            
            //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                           winner, ::x10::util::Option::FMGL(BAD__get)()),
                                         ::x10::util::Option::FMGL(BAD__get)())))
            {
                isValid = false;
            }
            
        }
        
    }
    
    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if (isValid) {
        return ::x10aux::nullCheck(this->FMGL(properties))->getOrElse(
                 winner, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)0ll)));
        
    } else {
        
        //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::String* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
}

//#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::printParameters() {
    
    //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* problem = this->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__26730 = ::x10aux::makeStringLit("-p"); strLit__26730; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__26731 = ::x10aux::makeStringLit("MSP"); strLit__26731; })));
    
    //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__26732 = ::x10aux::makeStringLit("-f"); strLit__26732; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__26733 = ::x10aux::makeStringLit("."); strLit__26733; })));
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__26734 = ::x10aux::makeStringLit("-s"); strLit__26734; })),
                                                     ((x10_int)10));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__26735 = ::x10aux::makeStringLit("-sm"); strLit__26735; })),
                           ((x10_int)1));
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__26736 = ::x10aux::makeStringLit("-mi"); strLit__26736; })),
                             ((x10_int)1000000000));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__26737 = ::x10aux::makeStringLit("-mt"); strLit__26737; })),
                         ((x10_long)0ll));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__26738 = ::x10aux::makeStringLit("-tc"); strLit__26738; })),
                            ((x10_int)0));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__26739 = ::x10aux::makeStringLit("-tf"); strLit__26739; })),
                           ((x10_long)0ll));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__26740 = ::x10aux::makeStringLit("-b"); strLit__26740; })),
                                                       ((x10_int)10));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__26741 = ::x10aux::makeStringLit("-sl"); strLit__26741; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__26742 = ::x10aux::makeStringLit("AS"); strLit__26742; })));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__26743 = ::x10aux::makeStringLit("-N"); strLit__26743; })),
                           ((x10_int)1));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__26744 = ::x10aux::makeStringLit("-U"); strLit__26744; })),
                                                        ((x10_int)0));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__26745 = ::x10aux::makeStringLit("-R"); strLit__26745; })),
                                                        ((x10_int)0));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__26746 = ::x10aux::makeStringLit("-C"); strLit__26746; })),
                           ((x10_int)100));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__26747 = ::x10aux::makeStringLit("-P_e"); strLit__26747; })),
                         ((x10_int)4));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__26748 = ::x10aux::makeStringLit("-I"); strLit__26748; })),
                         ((x10_long)0ll));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__26749 = ::x10aux::makeStringLit("-D"); strLit__26749; })),
                               0.3);
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__26750 = ::x10aux::makeStringLit("-W"); strLit__26750; })),
                                                        ((x10_long)0ll));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__26751 = ::x10aux::makeStringLit("-A"); strLit__26751; })),
                             0.0);
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__26752 = ::x10aux::makeStringLit("-M"); strLit__26752; })),
                            ((x10_int)1));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__26753 = ::x10aux::makeStringLit("-CD"); strLit__26753; })),
                             ((x10_int)1));
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__26754 = ::x10aux::makeStringLit("-if"); strLit__26754; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__26755 = ::x10aux::makeStringLit("."); strLit__26755; })));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__26756 = ::x10aux::makeStringLit("-of"); strLit__26756; })),
                          ((x10_int)1));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__26757 = ::x10aux::makeStringLit(""); strLit__26757; }))));
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__26758 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__26758; }))));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26759 = ::x10aux::makeStringLit("Problem "); strLit__26759; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__26760 = ::x10aux::makeStringLit(" size "); strLit__26760; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__26761 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__26761; }))), filePath)));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__26762 = ::x10aux::makeStringLit(""); strLit__26762; }))));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__26763 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__26763; }))));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26764 = ::x10aux::makeStringLit("Solver: "); strLit__26764; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__26765 = ::x10aux::makeStringLit(", Mode: "); strLit__26765; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__26766 = ::x10aux::makeStringLit("sequential"); strLit__26766; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__26767 = ::x10aux::makeStringLit("parallel"); strLit__26767; })))), (__extension__ ({ static ::x10::lang::String* strLit__26768 = ::x10aux::makeStringLit(", Limit: "); strLit__26768; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__26769 = ::x10aux::makeStringLit(" iterations or "); strLit__26769; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__26770 = ::x10aux::makeStringLit(" ms."); strLit__26770; })))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26771 = ::x10aux::makeStringLit("Target cost from "); strLit__26771; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__26772 = ::x10aux::makeStringLit("file. "); strLit__26772; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__26773 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__26773; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__26774 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__26774; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__26775 = ::x10aux::makeStringLit(""); strLit__26775; }))));
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__26776 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__26776; }))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__26777 = ::x10aux::makeStringLit("Using "); strLit__26777; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__26778 = ::x10aux::makeStringLit("Without "); strLit__26778; }))), (__extension__ ({ static ::x10::lang::String* strLit__26779 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__26779; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__26780 = ::x10aux::makeStringLit(" places. "); strLit__26780; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__26781 = ::x10aux::makeStringLit(" nodes per team "); strLit__26781; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__26782 = ::x10aux::makeStringLit(" Teams"); strLit__26782; })))));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26783 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__26783; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__26784 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__26784; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__26785 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__26785; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__26786 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__26786; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__26787 = ::x10aux::makeStringLit("%"); strLit__26787; })))));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26788 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__26788; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__26789 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__26789; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__26790 = ::x10aux::makeStringLit(" Initial delay "); strLit__26790; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__26791 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__26791; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__26792 = ::x10aux::makeStringLit("%"); strLit__26792; })))));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26793 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__26793; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__26794 = ::x10aux::makeStringLit(" Change Vector "); strLit__26794; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__26795 = ::x10aux::makeStringLit(" - "); strLit__26795; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__26796 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__26796; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__26797 = ::x10aux::makeStringLit(" - "); strLit__26797; }))))));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__26798 = ::x10aux::makeStringLit(""); strLit__26798; }))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__26799 = ::x10aux::makeStringLit("Other Parameters:"); strLit__26799; }))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26800 = ::x10aux::makeStringLit("Max threads "); strLit__26800; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__26801 = ::x10aux::makeStringLit(" NTHREADS "); strLit__26801; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26802 = ::x10aux::makeStringLit("Solving "); strLit__26802; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__26803 = ::x10aux::makeStringLit(" times each instance"); strLit__26803; })))));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26804 = ::x10aux::makeStringLit(" Input vector "); strLit__26804; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__26805 = ::x10aux::makeStringLit("."); strLit__26805; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__26806 = ::x10aux::makeStringLit("not used"); strLit__26806; })))
        : (inputPath))));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__26807 = ::x10aux::makeStringLit(""); strLit__26807; }))));
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
