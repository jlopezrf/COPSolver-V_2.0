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
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__35371 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__35371->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35482 = ::x10aux::makeStringLit("h"); strLit__35482; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35483 = ::x10aux::makeStringLit("help"); strLit__35483; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35484 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__35484; }))));
                                                         t__35371;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__35375 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)53ll), false);
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35485 = ::x10aux::makeStringLit("p"); strLit__35485; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35486 = ::x10aux::makeStringLit("problem"); strLit__35486; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35487 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__35487; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35488 = ::x10aux::makeStringLit("f"); strLit__35488; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35489 = ::x10aux::makeStringLit("problem_file"); strLit__35489; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35490 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__35490; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35491 = ::x10aux::makeStringLit("s"); strLit__35491; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35492 = ::x10aux::makeStringLit("size"); strLit__35492; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35493 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__35493; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35494 = ::x10aux::makeStringLit("S"); strLit__35494; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35495 = ::x10aux::makeStringLit("seed"); strLit__35495; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35496 = ::x10aux::makeStringLit("seed. Default 0"); strLit__35496; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35497 = ::x10aux::makeStringLit("sm"); strLit__35497; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35498 = ::x10aux::makeStringLit("solver_mode"); strLit__35498; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35499 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__35499; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35500 = ::x10aux::makeStringLit("ce"); strLit__35500; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35501 = ::x10aux::makeStringLit("Control Strategy"); strLit__35501; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35502 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__35502; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35503 = ::x10aux::makeStringLit("sl"); strLit__35503; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35504 = ::x10aux::makeStringLit("solver"); strLit__35504; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35505 = ::x10aux::makeStringLit("Solver to use"); strLit__35505; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35506 = ::x10aux::makeStringLit("of"); strLit__35506; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35507 = ::x10aux::makeStringLit("out_format"); strLit__35507; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35508 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__35508; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35509 = ::x10aux::makeStringLit("tf"); strLit__35509; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35510 = ::x10aux::makeStringLit("target_from"); strLit__35510; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35511 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__35511; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35512 = ::x10aux::makeStringLit("tc"); strLit__35512; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35513 = ::x10aux::makeStringLit("target_cost"); strLit__35513; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35514 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__35514; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35515 = ::x10aux::makeStringLit("b"); strLit__35515; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35516 = ::x10aux::makeStringLit("bench"); strLit__35516; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35517 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__35517; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35518 = ::x10aux::makeStringLit("pf"); strLit__35518; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35519 = ::x10aux::makeStringLit("param_file"); strLit__35519; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35520 = ::x10aux::makeStringLit("path of the parameters file"); strLit__35520; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35521 = ::x10aux::makeStringLit("v"); strLit__35521; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35522 = ::x10aux::makeStringLit("verify"); strLit__35522; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35523 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__35523; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35524 = ::x10aux::makeStringLit("ca"); strLit__35524; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35525 = ::x10aux::makeStringLit("comp_AVG"); strLit__35525; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35526 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__35526; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35527 = ::x10aux::makeStringLit("N"); strLit__35527; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35528 = ::x10aux::makeStringLit("nodes_per_team"); strLit__35528; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35529 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__35529; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35530 = ::x10aux::makeStringLit("U"); strLit__35530; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35531 = ::x10aux::makeStringLit("update"); strLit__35531; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35532 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__35532; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35533 = ::x10aux::makeStringLit("R"); strLit__35533; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35534 = ::x10aux::makeStringLit("report"); strLit__35534; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35535 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__35535; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35536 = ::x10aux::makeStringLit("C"); strLit__35536; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35537 = ::x10aux::makeStringLit("p_change_vector"); strLit__35537; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35538 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__35538; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35539 = ::x10aux::makeStringLit("I"); strLit__35539; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35540 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__35540; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35541 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__35541; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35542 = ::x10aux::makeStringLit("D"); strLit__35542; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35543 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__35543; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35544 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__35544; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35545 = ::x10aux::makeStringLit("W"); strLit__35545; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35546 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__35546; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35547 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__35547; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35548 = ::x10aux::makeStringLit("A"); strLit__35548; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35549 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__35549; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35550 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__35550; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35551 = ::x10aux::makeStringLit("O"); strLit__35551; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35552 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__35552; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35553 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__35553; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35554 = ::x10aux::makeStringLit("M"); strLit__35554; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35555 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__35555; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35556 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__35556; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35557 = ::x10aux::makeStringLit("CD"); strLit__35557; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35558 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__35558; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35559 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__35559; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35560 = ::x10aux::makeStringLit("P_e"); strLit__35560; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35561 = ::x10aux::makeStringLit("poolsize_elite"); strLit__35561; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35562 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__35562; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35563 = ::x10aux::makeStringLit("P_lm"); strLit__35563; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35564 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__35564; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35565 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__35565; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35566 = ::x10aux::makeStringLit("P_eM"); strLit__35566; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35567 = ::x10aux::makeStringLit("ep_mode"); strLit__35567; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35568 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__35568; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35569 = ::x10aux::makeStringLit("P_lmM"); strLit__35569; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35570 = ::x10aux::makeStringLit("lmp_mode"); strLit__35570; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35571 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__35571; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35572 = ::x10aux::makeStringLit("P_eD"); strLit__35572; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35573 = ::x10aux::makeStringLit("ep_dist"); strLit__35573; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35574 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__35574; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35575 = ::x10aux::makeStringLit("P_lmD"); strLit__35575; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35576 = ::x10aux::makeStringLit("lmp_dist"); strLit__35576; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35577 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__35577; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35578 = ::x10aux::makeStringLit("mt"); strLit__35578; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35579 = ::x10aux::makeStringLit("max_time"); strLit__35579; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35580 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__35580; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35581 = ::x10aux::makeStringLit("mi"); strLit__35581; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35582 = ::x10aux::makeStringLit("max_iter"); strLit__35582; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35583 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__35583; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35584 = ::x10aux::makeStringLit("mr"); strLit__35584; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35585 = ::x10aux::makeStringLit("max_restart"); strLit__35585; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35586 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__35586; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35587 = ::x10aux::makeStringLit("rp"); strLit__35587; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35588 = ::x10aux::makeStringLit("rep_partial"); strLit__35588; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35589 = ::x10aux::makeStringLit("report partial results"); strLit__35589; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35590 = ::x10aux::makeStringLit("dbg"); strLit__35590; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35591 = ::x10aux::makeStringLit("debug_terminal"); strLit__35591; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35592 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__35592; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35593 = ::x10aux::makeStringLit("AS_vtr"); strLit__35593; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35594 = ::x10aux::makeStringLit("AS_varToReset"); strLit__35594; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35595 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__35595; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35596 = ::x10aux::makeStringLit("AS_rp"); strLit__35596; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35597 = ::x10aux::makeStringLit("AS_resetPer"); strLit__35597; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35598 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__35598; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35599 = ::x10aux::makeStringLit("AS_flm"); strLit__35599; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35600 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__35600; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35601 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__35601; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35602 = ::x10aux::makeStringLit("AS_fs"); strLit__35602; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35603 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__35603; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35604 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__35604; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35605 = ::x10aux::makeStringLit("AS_rl"); strLit__35605; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35606 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__35606; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35607 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__35607; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35608 = ::x10aux::makeStringLit("AS_plm"); strLit__35608; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35609 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__35609; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35610 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__35610; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35611 = ::x10aux::makeStringLit("AS_e"); strLit__35611; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35612 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__35612; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35613 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__35613; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35614 = ::x10aux::makeStringLit("AS_fb"); strLit__35614; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35615 = ::x10aux::makeStringLit("AS_firstBest"); strLit__35615; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35616 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__35616; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35617 = ::x10aux::makeStringLit("EO_t"); strLit__35617; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35618 = ::x10aux::makeStringLit("EO_tau"); strLit__35618; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35619 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__35619; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35620 = ::x10aux::makeStringLit("EO_p"); strLit__35620; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35621 = ::x10aux::makeStringLit("EO_pdf"); strLit__35621; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35622 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__35622; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35623 = ::x10aux::makeStringLit("EO_ss"); strLit__35623; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35624 = ::x10aux::makeStringLit("EO_selSec"); strLit__35624; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35625 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__35625; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35626 = ::x10aux::makeStringLit("RoTS_t"); strLit__35626; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35627 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__35627; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35628 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__35628; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35629 = ::x10aux::makeStringLit("RoTS_a"); strLit__35629; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35630 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__35630; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35631 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__35631; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35632 = ::x10aux::makeStringLit("GA_pz"); strLit__35632; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35633 = ::x10aux::makeStringLit("GA_population_size"); strLit__35633; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35634 = ::x10aux::makeStringLit("Set the population size. Default 2*n"); strLit__35634; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35635 = ::x10aux::makeStringLit("if"); strLit__35635; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35636 = ::x10aux::makeStringLit("input_vector_file"); strLit__35636; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35637 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__35637; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35638 = ::x10aux::makeStringLit("bv"); strLit__35638; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35639 = ::x10aux::makeStringLit("model_baseValue"); strLit__35639; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35640 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__35640; }))));
                                                         t__35375->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)52ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__35641 = ::x10aux::makeStringLit("LNP_k"); strLit__35641; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35642 = ::x10aux::makeStringLit("LNP_k"); strLit__35642; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__35643 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__35643; }))));
                                                         t__35375;
                                                     }))
                                                     );
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__35644 = ::x10aux::makeStringLit("-pf"); strLit__35644; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__35645 = ::x10aux::makeStringLit("CPLS.param"); strLit__35645; })));
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    try {
        
        //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        this->FMGL(paramFile) = ::x10::io::File::_make(this->FMGL(paramFileName));
    }
    catch (::x10::lang::CheckedThrowable* __exc187) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc187)) {
            ::x10::io::IOException* id__4 = static_cast< ::x10::io::IOException*>(__exc187);
            {
                
                //#line 89 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
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



//#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::parseFile() {
    
    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals(this->FMGL(paramFile), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__35646 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__35646; }))));
        
        //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return;
    }
    
    //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__27538;
        for (line__27538 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__27538));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__27538));
            
            //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(line)->x10::lang::String::length(),
                                         ((x10_int)0)))) {
                continue;
            }
            
            //#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals((line)->charAt(((x10_int)0)),
                                         ((x10_char)'#'))))
            {
                continue;
            }
            
            //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            x10_int sepIndex = ::x10aux::nullCheck(line)->x10::lang::String::indexOf(
                                 this->FMGL(SEPARETOR));
            
            //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* key = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                         ((x10_int)0), sepIndex);
            
            //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* value = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                           ((sepIndex) + (((x10_int)1))));
            
            //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::Rail< ::x10::lang::String* >* res =
              this->cpls::ParamManager::myGet(key);
            
            //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(res, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                continue;
            } else {
                
                //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                ::x10::lang::Any* values = this->howManyValues(
                                             key);
                
                //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                if ((::x10aux::struct_equals((::x10aux::class_cast<x10_int>(values)),
                                             ((x10_int)0))))
                {
                    
                    //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10aux::nullCheck(this->FMGL(properties))->put(
                      key, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                            value));
                    
                    //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::util::Option option = ::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                                   key, ::x10::util::Option::FMGL(BAD__get)());
                    
                    //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if ((::x10aux::struct_equals(option, ::x10::util::Option::FMGL(BAD__get)())))
                    {
                        break;
                    }
                    
                    //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::lang::String* otherForm = option->otherForm(
                                                       key);
                    
                    //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if (((::x10aux::nullCheck(otherForm)->x10::lang::String::length()) > (((x10_int)0))))
                    {
                        ::x10aux::nullCheck(this->FMGL(properties))->put(
                          otherForm, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                                      value));
                    }
                    
                } else {
                    
                    //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    continue;
                }
                
            }
            
        }
    }
    
}

//#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
::x10::lang::Rail< ::x10::lang::String* >* cpls::ParamManager::myGet(
  ::x10::lang::String* key) {
    
    //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* winner = key;
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_boolean isValid = true;
    
    //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals((key)->charAt(((x10_int)0)),
                                 ((x10_char)'-')))) {
        
        //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       key, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            isValid = false;
        }
        
    } else {
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__35655 = ::x10aux::makeStringLit("-"); strLit__35655; })), key);
        
        //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__35658 = ::x10aux::makeStringLit("--"); strLit__35658; })), key);
            
            //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                           winner, ::x10::util::Option::FMGL(BAD__get)()),
                                         ::x10::util::Option::FMGL(BAD__get)())))
            {
                isValid = false;
            }
            
        }
        
    }
    
    //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if (isValid) {
        return ::x10aux::nullCheck(this->FMGL(properties))->getOrElse(
                 winner, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)0ll)));
        
    } else {
        
        //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::String* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
}

//#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::printParameters() {
    
    //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* problem = this->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__35663 = ::x10aux::makeStringLit("-p"); strLit__35663; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__35664 = ::x10aux::makeStringLit("MSP"); strLit__35664; })));
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__35665 = ::x10aux::makeStringLit("-f"); strLit__35665; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__35666 = ::x10aux::makeStringLit("."); strLit__35666; })));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__35667 = ::x10aux::makeStringLit("-s"); strLit__35667; })),
                                                     ((x10_int)10));
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__35668 = ::x10aux::makeStringLit("-sm"); strLit__35668; })),
                           ((x10_int)1));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__35669 = ::x10aux::makeStringLit("-mi"); strLit__35669; })),
                             ((x10_int)1000000000));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__35670 = ::x10aux::makeStringLit("-mt"); strLit__35670; })),
                         ((x10_long)0ll));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__35671 = ::x10aux::makeStringLit("-tc"); strLit__35671; })),
                            ((x10_int)0));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__35672 = ::x10aux::makeStringLit("-tf"); strLit__35672; })),
                           ((x10_long)0ll));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__35673 = ::x10aux::makeStringLit("-b"); strLit__35673; })),
                                                       ((x10_int)10));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__35674 = ::x10aux::makeStringLit("-sl"); strLit__35674; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__35675 = ::x10aux::makeStringLit("AS"); strLit__35675; })));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__35676 = ::x10aux::makeStringLit("-N"); strLit__35676; })),
                           ((x10_int)1));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__35677 = ::x10aux::makeStringLit("-U"); strLit__35677; })),
                                                        ((x10_int)0));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__35678 = ::x10aux::makeStringLit("-R"); strLit__35678; })),
                                                        ((x10_int)0));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__35679 = ::x10aux::makeStringLit("-C"); strLit__35679; })),
                           ((x10_int)100));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__35680 = ::x10aux::makeStringLit("-P_e"); strLit__35680; })),
                         ((x10_int)4));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__35681 = ::x10aux::makeStringLit("-I"); strLit__35681; })),
                         ((x10_long)0ll));
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__35682 = ::x10aux::makeStringLit("-D"); strLit__35682; })),
                               0.3);
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__35683 = ::x10aux::makeStringLit("-W"); strLit__35683; })),
                                                        ((x10_long)0ll));
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__35684 = ::x10aux::makeStringLit("-A"); strLit__35684; })),
                             0.0);
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__35685 = ::x10aux::makeStringLit("-M"); strLit__35685; })),
                            ((x10_int)1));
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__35686 = ::x10aux::makeStringLit("-CD"); strLit__35686; })),
                             ((x10_int)1));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__35687 = ::x10aux::makeStringLit("-if"); strLit__35687; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__35688 = ::x10aux::makeStringLit("."); strLit__35688; })));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__35689 = ::x10aux::makeStringLit("-of"); strLit__35689; })),
                          ((x10_int)1));
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__35690 = ::x10aux::makeStringLit(""); strLit__35690; }))));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__35691 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__35691; }))));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__35692 = ::x10aux::makeStringLit("Problem "); strLit__35692; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__35693 = ::x10aux::makeStringLit(" size "); strLit__35693; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__35694 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__35694; }))), filePath)));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__35695 = ::x10aux::makeStringLit(""); strLit__35695; }))));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__35696 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__35696; }))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__35697 = ::x10aux::makeStringLit("Solver: "); strLit__35697; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__35698 = ::x10aux::makeStringLit(", Mode: "); strLit__35698; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__35699 = ::x10aux::makeStringLit("sequential"); strLit__35699; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__35700 = ::x10aux::makeStringLit("parallel"); strLit__35700; })))), (__extension__ ({ static ::x10::lang::String* strLit__35701 = ::x10aux::makeStringLit(", Limit: "); strLit__35701; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__35702 = ::x10aux::makeStringLit(" iterations or "); strLit__35702; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__35703 = ::x10aux::makeStringLit(" ms."); strLit__35703; })))));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__35704 = ::x10aux::makeStringLit("Target cost from "); strLit__35704; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__35705 = ::x10aux::makeStringLit("file. "); strLit__35705; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__35706 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__35706; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__35707 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__35707; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__35708 = ::x10aux::makeStringLit(""); strLit__35708; }))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__35709 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__35709; }))));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__35710 = ::x10aux::makeStringLit("Using "); strLit__35710; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__35711 = ::x10aux::makeStringLit("Without "); strLit__35711; }))), (__extension__ ({ static ::x10::lang::String* strLit__35712 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__35712; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__35713 = ::x10aux::makeStringLit(" places. "); strLit__35713; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__35714 = ::x10aux::makeStringLit(" nodes per team "); strLit__35714; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__35715 = ::x10aux::makeStringLit(" Teams"); strLit__35715; })))));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__35716 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__35716; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__35717 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__35717; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__35718 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__35718; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__35719 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__35719; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__35720 = ::x10aux::makeStringLit("%"); strLit__35720; })))));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__35721 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__35721; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__35722 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__35722; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__35723 = ::x10aux::makeStringLit(" Initial delay "); strLit__35723; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__35724 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__35724; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__35725 = ::x10aux::makeStringLit("%"); strLit__35725; })))));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__35726 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__35726; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__35727 = ::x10aux::makeStringLit(" Change Vector "); strLit__35727; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__35728 = ::x10aux::makeStringLit(" - "); strLit__35728; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__35729 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__35729; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__35730 = ::x10aux::makeStringLit(" - "); strLit__35730; }))))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__35731 = ::x10aux::makeStringLit(""); strLit__35731; }))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__35732 = ::x10aux::makeStringLit("Other Parameters:"); strLit__35732; }))));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__35733 = ::x10aux::makeStringLit("Max threads "); strLit__35733; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__35734 = ::x10aux::makeStringLit(" NTHREADS "); strLit__35734; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__35735 = ::x10aux::makeStringLit("Solving "); strLit__35735; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__35736 = ::x10aux::makeStringLit(" times each instance"); strLit__35736; })))));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__35737 = ::x10aux::makeStringLit(" Input vector "); strLit__35737; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__35738 = ::x10aux::makeStringLit("."); strLit__35738; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__35739 = ::x10aux::makeStringLit("not used"); strLit__35739; })))
        : (inputPath))));
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__35740 = ::x10aux::makeStringLit(""); strLit__35740; }))));
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
