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

//#line 11 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 12 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"

//#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::_constructor(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    (this)->::x10::util::OptionsParser::_constructor(args, (__extension__ ({
                                                         
                                                         //#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__28303 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__28303->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28412 = ::x10aux::makeStringLit("h"); strLit__28412; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28413 = ::x10aux::makeStringLit("help"); strLit__28413; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28414 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__28414; }))));
                                                         t__28303;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__28307 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)52ll), false);
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28415 = ::x10aux::makeStringLit("p"); strLit__28415; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28416 = ::x10aux::makeStringLit("problem"); strLit__28416; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28417 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__28417; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28418 = ::x10aux::makeStringLit("f"); strLit__28418; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28419 = ::x10aux::makeStringLit("problem_file"); strLit__28419; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28420 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__28420; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28421 = ::x10aux::makeStringLit("s"); strLit__28421; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28422 = ::x10aux::makeStringLit("size"); strLit__28422; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28423 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__28423; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28424 = ::x10aux::makeStringLit("S"); strLit__28424; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28425 = ::x10aux::makeStringLit("seed"); strLit__28425; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28426 = ::x10aux::makeStringLit("seed. Default 0"); strLit__28426; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28427 = ::x10aux::makeStringLit("sm"); strLit__28427; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28428 = ::x10aux::makeStringLit("solver_mode"); strLit__28428; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28429 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__28429; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28430 = ::x10aux::makeStringLit("ce"); strLit__28430; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28431 = ::x10aux::makeStringLit("Control Strategy"); strLit__28431; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28432 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__28432; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28433 = ::x10aux::makeStringLit("sl"); strLit__28433; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28434 = ::x10aux::makeStringLit("solver"); strLit__28434; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28435 = ::x10aux::makeStringLit("Solver to use"); strLit__28435; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28436 = ::x10aux::makeStringLit("of"); strLit__28436; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28437 = ::x10aux::makeStringLit("out_format"); strLit__28437; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28438 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__28438; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28439 = ::x10aux::makeStringLit("tf"); strLit__28439; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28440 = ::x10aux::makeStringLit("target_from"); strLit__28440; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28441 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__28441; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28442 = ::x10aux::makeStringLit("tc"); strLit__28442; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28443 = ::x10aux::makeStringLit("target_cost"); strLit__28443; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28444 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__28444; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28445 = ::x10aux::makeStringLit("b"); strLit__28445; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28446 = ::x10aux::makeStringLit("bench"); strLit__28446; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28447 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__28447; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28448 = ::x10aux::makeStringLit("pf"); strLit__28448; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28449 = ::x10aux::makeStringLit("param_file"); strLit__28449; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28450 = ::x10aux::makeStringLit("path of the parameters file"); strLit__28450; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28451 = ::x10aux::makeStringLit("v"); strLit__28451; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28452 = ::x10aux::makeStringLit("verify"); strLit__28452; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28453 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__28453; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28454 = ::x10aux::makeStringLit("ca"); strLit__28454; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28455 = ::x10aux::makeStringLit("comp_AVG"); strLit__28455; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28456 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__28456; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28457 = ::x10aux::makeStringLit("N"); strLit__28457; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28458 = ::x10aux::makeStringLit("nodes_per_team"); strLit__28458; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28459 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__28459; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28460 = ::x10aux::makeStringLit("U"); strLit__28460; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28461 = ::x10aux::makeStringLit("update"); strLit__28461; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28462 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__28462; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28463 = ::x10aux::makeStringLit("R"); strLit__28463; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28464 = ::x10aux::makeStringLit("report"); strLit__28464; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28465 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__28465; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28466 = ::x10aux::makeStringLit("C"); strLit__28466; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28467 = ::x10aux::makeStringLit("p_change_vector"); strLit__28467; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28468 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__28468; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28469 = ::x10aux::makeStringLit("I"); strLit__28469; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28470 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__28470; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28471 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__28471; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28472 = ::x10aux::makeStringLit("D"); strLit__28472; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28473 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__28473; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28474 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__28474; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28475 = ::x10aux::makeStringLit("W"); strLit__28475; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28476 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__28476; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28477 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__28477; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28478 = ::x10aux::makeStringLit("A"); strLit__28478; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28479 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__28479; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28480 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__28480; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28481 = ::x10aux::makeStringLit("O"); strLit__28481; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28482 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__28482; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28483 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__28483; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28484 = ::x10aux::makeStringLit("M"); strLit__28484; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28485 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__28485; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28486 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__28486; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28487 = ::x10aux::makeStringLit("CD"); strLit__28487; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28488 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__28488; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28489 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__28489; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28490 = ::x10aux::makeStringLit("P_e"); strLit__28490; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28491 = ::x10aux::makeStringLit("poolsize_elite"); strLit__28491; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28492 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__28492; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28493 = ::x10aux::makeStringLit("P_lm"); strLit__28493; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28494 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__28494; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28495 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__28495; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28496 = ::x10aux::makeStringLit("P_eM"); strLit__28496; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28497 = ::x10aux::makeStringLit("ep_mode"); strLit__28497; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28498 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__28498; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28499 = ::x10aux::makeStringLit("P_lmM"); strLit__28499; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28500 = ::x10aux::makeStringLit("lmp_mode"); strLit__28500; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28501 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__28501; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28502 = ::x10aux::makeStringLit("P_eD"); strLit__28502; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28503 = ::x10aux::makeStringLit("ep_dist"); strLit__28503; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28504 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__28504; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28505 = ::x10aux::makeStringLit("P_lmD"); strLit__28505; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28506 = ::x10aux::makeStringLit("lmp_dist"); strLit__28506; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28507 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__28507; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28508 = ::x10aux::makeStringLit("mt"); strLit__28508; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28509 = ::x10aux::makeStringLit("max_time"); strLit__28509; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28510 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__28510; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28511 = ::x10aux::makeStringLit("mi"); strLit__28511; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28512 = ::x10aux::makeStringLit("max_iter"); strLit__28512; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28513 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__28513; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28514 = ::x10aux::makeStringLit("mr"); strLit__28514; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28515 = ::x10aux::makeStringLit("max_restart"); strLit__28515; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28516 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__28516; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28517 = ::x10aux::makeStringLit("rp"); strLit__28517; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28518 = ::x10aux::makeStringLit("rep_partial"); strLit__28518; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28519 = ::x10aux::makeStringLit("report partial results"); strLit__28519; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28520 = ::x10aux::makeStringLit("dbg"); strLit__28520; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28521 = ::x10aux::makeStringLit("debug_terminal"); strLit__28521; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28522 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__28522; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28523 = ::x10aux::makeStringLit("AS_vtr"); strLit__28523; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28524 = ::x10aux::makeStringLit("AS_varToReset"); strLit__28524; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28525 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__28525; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28526 = ::x10aux::makeStringLit("AS_rp"); strLit__28526; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28527 = ::x10aux::makeStringLit("AS_resetPer"); strLit__28527; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28528 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__28528; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28529 = ::x10aux::makeStringLit("AS_flm"); strLit__28529; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28530 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__28530; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28531 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__28531; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28532 = ::x10aux::makeStringLit("AS_fs"); strLit__28532; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28533 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__28533; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28534 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__28534; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28535 = ::x10aux::makeStringLit("AS_rl"); strLit__28535; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28536 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__28536; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28537 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__28537; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28538 = ::x10aux::makeStringLit("AS_plm"); strLit__28538; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28539 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__28539; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28540 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__28540; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28541 = ::x10aux::makeStringLit("AS_e"); strLit__28541; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28542 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__28542; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28543 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__28543; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28544 = ::x10aux::makeStringLit("AS_fb"); strLit__28544; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28545 = ::x10aux::makeStringLit("AS_firstBest"); strLit__28545; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28546 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__28546; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28547 = ::x10aux::makeStringLit("EO_t"); strLit__28547; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28548 = ::x10aux::makeStringLit("EO_tau"); strLit__28548; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28549 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__28549; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28550 = ::x10aux::makeStringLit("EO_p"); strLit__28550; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28551 = ::x10aux::makeStringLit("EO_pdf"); strLit__28551; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28552 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__28552; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28553 = ::x10aux::makeStringLit("EO_ss"); strLit__28553; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28554 = ::x10aux::makeStringLit("EO_selSec"); strLit__28554; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28555 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__28555; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28556 = ::x10aux::makeStringLit("RoTS_t"); strLit__28556; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28557 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__28557; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28558 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__28558; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28559 = ::x10aux::makeStringLit("RoTS_a"); strLit__28559; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28560 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__28560; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28561 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__28561; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28562 = ::x10aux::makeStringLit("if"); strLit__28562; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28563 = ::x10aux::makeStringLit("input_vector_file"); strLit__28563; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28564 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__28564; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28565 = ::x10aux::makeStringLit("bv"); strLit__28565; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28566 = ::x10aux::makeStringLit("model_baseValue"); strLit__28566; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28567 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__28567; }))));
                                                         t__28307->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__28568 = ::x10aux::makeStringLit("LNP_k"); strLit__28568; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28569 = ::x10aux::makeStringLit("LNP_k"); strLit__28569; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__28570 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__28570; }))));
                                                         t__28307;
                                                     }))
                                                     );
    
    //#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    
    //#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 82 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__28571 = ::x10aux::makeStringLit("-pf"); strLit__28571; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__28572 = ::x10aux::makeStringLit("CPLS.param"); strLit__28572; })));
    
    //#line 83 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    try {
        
        //#line 84 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        this->FMGL(paramFile) = ::x10::io::File::_make(this->FMGL(paramFileName));
    }
    catch (::x10::lang::CheckedThrowable* __exc161) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc161)) {
            ::x10::io::IOException* id__6 = static_cast< ::x10::io::IOException*>(__exc161);
            {
                
                //#line 88 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
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



//#line 92 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::parseFile() {
    
    //#line 93 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals(this->FMGL(paramFile), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 94 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__28573 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__28573; }))));
        
        //#line 95 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return;
    }
    
    //#line 98 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__21336;
        for (line__21336 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__21336));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__21336));
            
            //#line 100 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(line)->x10::lang::String::length(),
                                         ((x10_int)0)))) {
                continue;
            }
            
            //#line 101 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals((line)->charAt(((x10_int)0)),
                                         ((x10_char)'#'))))
            {
                continue;
            }
            
            //#line 103 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            x10_int sepIndex = ::x10aux::nullCheck(line)->x10::lang::String::indexOf(
                                 this->FMGL(SEPARETOR));
            
            //#line 104 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* key = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                         ((x10_int)0), sepIndex);
            
            //#line 105 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* value = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                           ((sepIndex) + (((x10_int)1))));
            
            //#line 106 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::Rail< ::x10::lang::String* >* res =
              this->cpls::ParamManager::myGet(key);
            
            //#line 110 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(res, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 112 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                continue;
            } else {
                
                //#line 115 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                ::x10::lang::Any* values = this->howManyValues(
                                             key);
                
                //#line 117 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                if ((::x10aux::struct_equals((::x10aux::class_cast<x10_int>(values)),
                                             ((x10_int)0))))
                {
                    
                    //#line 120 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10aux::nullCheck(this->FMGL(properties))->put(
                      key, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                            value));
                    
                    //#line 121 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::util::Option option = ::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                                   key, ::x10::util::Option::FMGL(BAD__get)());
                    
                    //#line 122 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if ((::x10aux::struct_equals(option, ::x10::util::Option::FMGL(BAD__get)())))
                    {
                        break;
                    }
                    
                    //#line 123 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::lang::String* otherForm = option->otherForm(
                                                       key);
                    
                    //#line 124 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if (((::x10aux::nullCheck(otherForm)->x10::lang::String::length()) > (((x10_int)0))))
                    {
                        ::x10aux::nullCheck(this->FMGL(properties))->put(
                          otherForm, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                                      value));
                    }
                    
                } else {
                    
                    //#line 128 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    continue;
                }
                
            }
            
        }
    }
    
}

//#line 135 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
::x10::lang::Rail< ::x10::lang::String* >* cpls::ParamManager::myGet(
  ::x10::lang::String* key) {
    
    //#line 136 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* winner = key;
    
    //#line 137 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_boolean isValid = true;
    
    //#line 138 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals((key)->charAt(((x10_int)0)),
                                 ((x10_char)'-')))) {
        
        //#line 139 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       key, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            isValid = false;
        }
        
    } else {
        
        //#line 141 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__28582 = ::x10aux::makeStringLit("-"); strLit__28582; })), key);
        
        //#line 142 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 143 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__28585 = ::x10aux::makeStringLit("--"); strLit__28585; })), key);
            
            //#line 144 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                           winner, ::x10::util::Option::FMGL(BAD__get)()),
                                         ::x10::util::Option::FMGL(BAD__get)())))
            {
                isValid = false;
            }
            
        }
        
    }
    
    //#line 147 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if (isValid) {
        return ::x10aux::nullCheck(this->FMGL(properties))->getOrElse(
                 winner, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)0ll)));
        
    } else {
        
        //#line 150 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::String* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
}

//#line 154 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::printParameters() {
    
    //#line 155 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* problem = this->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__28590 = ::x10aux::makeStringLit("-p"); strLit__28590; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__28591 = ::x10aux::makeStringLit("MSP"); strLit__28591; })));
    
    //#line 156 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__28592 = ::x10aux::makeStringLit("-f"); strLit__28592; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__28593 = ::x10aux::makeStringLit("."); strLit__28593; })));
    
    //#line 157 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__28594 = ::x10aux::makeStringLit("-s"); strLit__28594; })),
                                                     ((x10_int)10));
    
    //#line 158 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__28595 = ::x10aux::makeStringLit("-sm"); strLit__28595; })),
                           ((x10_int)1));
    
    //#line 159 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__28596 = ::x10aux::makeStringLit("-mi"); strLit__28596; })),
                             ((x10_int)1000000000));
    
    //#line 160 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__28597 = ::x10aux::makeStringLit("-mt"); strLit__28597; })),
                         ((x10_long)0ll));
    
    //#line 161 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__28598 = ::x10aux::makeStringLit("-tc"); strLit__28598; })),
                            ((x10_int)0));
    
    //#line 162 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__28599 = ::x10aux::makeStringLit("-tf"); strLit__28599; })),
                           ((x10_long)0ll));
    
    //#line 163 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__28600 = ::x10aux::makeStringLit("-b"); strLit__28600; })),
                                                       ((x10_int)10));
    
    //#line 164 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__28601 = ::x10aux::makeStringLit("-sl"); strLit__28601; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__28602 = ::x10aux::makeStringLit("AS"); strLit__28602; })));
    
    //#line 165 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__28603 = ::x10aux::makeStringLit("-N"); strLit__28603; })),
                           ((x10_int)1));
    
    //#line 166 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__28604 = ::x10aux::makeStringLit("-U"); strLit__28604; })),
                                                        ((x10_int)0));
    
    //#line 167 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__28605 = ::x10aux::makeStringLit("-R"); strLit__28605; })),
                                                        ((x10_int)0));
    
    //#line 168 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__28606 = ::x10aux::makeStringLit("-C"); strLit__28606; })),
                           ((x10_int)100));
    
    //#line 169 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__28607 = ::x10aux::makeStringLit("-P_e"); strLit__28607; })),
                         ((x10_int)4));
    
    //#line 170 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__28608 = ::x10aux::makeStringLit("-I"); strLit__28608; })),
                         ((x10_long)0ll));
    
    //#line 171 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__28609 = ::x10aux::makeStringLit("-D"); strLit__28609; })),
                               0.3);
    
    //#line 172 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__28610 = ::x10aux::makeStringLit("-W"); strLit__28610; })),
                                                        ((x10_long)0ll));
    
    //#line 173 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__28611 = ::x10aux::makeStringLit("-A"); strLit__28611; })),
                             0.0);
    
    //#line 174 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__28612 = ::x10aux::makeStringLit("-M"); strLit__28612; })),
                            ((x10_int)1));
    
    //#line 175 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__28613 = ::x10aux::makeStringLit("-CD"); strLit__28613; })),
                             ((x10_int)1));
    
    //#line 176 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__28614 = ::x10aux::makeStringLit("-if"); strLit__28614; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__28615 = ::x10aux::makeStringLit("."); strLit__28615; })));
    
    //#line 177 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__28616 = ::x10aux::makeStringLit("-of"); strLit__28616; })),
                          ((x10_int)1));
    
    //#line 179 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__28617 = ::x10aux::makeStringLit(""); strLit__28617; }))));
    
    //#line 180 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__28618 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__28618; }))));
    
    //#line 181 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__28619 = ::x10aux::makeStringLit("Problem "); strLit__28619; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__28620 = ::x10aux::makeStringLit(" size "); strLit__28620; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__28621 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__28621; }))), filePath)));
    
    //#line 182 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__28622 = ::x10aux::makeStringLit(""); strLit__28622; }))));
    
    //#line 183 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__28623 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__28623; }))));
    
    //#line 184 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__28624 = ::x10aux::makeStringLit("Solver: "); strLit__28624; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__28625 = ::x10aux::makeStringLit(", Mode: "); strLit__28625; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__28626 = ::x10aux::makeStringLit("sequential"); strLit__28626; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__28627 = ::x10aux::makeStringLit("parallel"); strLit__28627; })))), (__extension__ ({ static ::x10::lang::String* strLit__28628 = ::x10aux::makeStringLit(", Limit: "); strLit__28628; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__28629 = ::x10aux::makeStringLit(" iterations or "); strLit__28629; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__28630 = ::x10aux::makeStringLit(" ms."); strLit__28630; })))));
    
    //#line 185 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__28631 = ::x10aux::makeStringLit("Target cost from "); strLit__28631; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__28632 = ::x10aux::makeStringLit("file. "); strLit__28632; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__28633 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__28633; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__28634 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__28634; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 188 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__28635 = ::x10aux::makeStringLit(""); strLit__28635; }))));
    
    //#line 189 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__28636 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__28636; }))));
    
    //#line 190 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__28637 = ::x10aux::makeStringLit("Using "); strLit__28637; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__28638 = ::x10aux::makeStringLit("Without "); strLit__28638; }))), (__extension__ ({ static ::x10::lang::String* strLit__28639 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__28639; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__28640 = ::x10aux::makeStringLit(" places. "); strLit__28640; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__28641 = ::x10aux::makeStringLit(" nodes per team "); strLit__28641; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__28642 = ::x10aux::makeStringLit(" Teams"); strLit__28642; })))));
    
    //#line 191 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__28643 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__28643; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__28644 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__28644; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__28645 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__28645; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__28646 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__28646; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__28647 = ::x10aux::makeStringLit("%"); strLit__28647; })))));
    
    //#line 192 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__28648 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__28648; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__28649 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__28649; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__28650 = ::x10aux::makeStringLit(" Initial delay "); strLit__28650; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__28651 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__28651; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__28652 = ::x10aux::makeStringLit("%"); strLit__28652; })))));
    
    //#line 193 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__28653 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__28653; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__28654 = ::x10aux::makeStringLit(" Change Vector "); strLit__28654; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__28655 = ::x10aux::makeStringLit(" - "); strLit__28655; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__28656 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__28656; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__28657 = ::x10aux::makeStringLit(" - "); strLit__28657; }))))));
    
    //#line 194 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__28658 = ::x10aux::makeStringLit(""); strLit__28658; }))));
    
    //#line 195 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__28659 = ::x10aux::makeStringLit("Other Parameters:"); strLit__28659; }))));
    
    //#line 196 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__28660 = ::x10aux::makeStringLit("Max threads "); strLit__28660; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__28661 = ::x10aux::makeStringLit(" NTHREADS "); strLit__28661; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 197 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__28662 = ::x10aux::makeStringLit("Solving "); strLit__28662; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__28663 = ::x10aux::makeStringLit(" times each instance"); strLit__28663; })))));
    
    //#line 198 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__28664 = ::x10aux::makeStringLit(" Input vector "); strLit__28664; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__28665 = ::x10aux::makeStringLit("."); strLit__28665; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__28666 = ::x10aux::makeStringLit("not used"); strLit__28666; })))
        : (inputPath))));
    
    //#line 199 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__28667 = ::x10aux::makeStringLit(""); strLit__28667; }))));
}

//#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
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
