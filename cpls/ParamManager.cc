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
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__32431 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__32431->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32542 = ::x10aux::makeStringLit("h"); strLit__32542; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32543 = ::x10aux::makeStringLit("help"); strLit__32543; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32544 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__32544; }))));
                                                         t__32431;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__32435 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)53ll), false);
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32545 = ::x10aux::makeStringLit("p"); strLit__32545; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32546 = ::x10aux::makeStringLit("problem"); strLit__32546; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32547 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__32547; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32548 = ::x10aux::makeStringLit("f"); strLit__32548; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32549 = ::x10aux::makeStringLit("problem_file"); strLit__32549; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32550 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__32550; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32551 = ::x10aux::makeStringLit("s"); strLit__32551; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32552 = ::x10aux::makeStringLit("size"); strLit__32552; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32553 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__32553; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32554 = ::x10aux::makeStringLit("S"); strLit__32554; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32555 = ::x10aux::makeStringLit("seed"); strLit__32555; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32556 = ::x10aux::makeStringLit("seed. Default 0"); strLit__32556; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32557 = ::x10aux::makeStringLit("sm"); strLit__32557; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32558 = ::x10aux::makeStringLit("solver_mode"); strLit__32558; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32559 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__32559; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32560 = ::x10aux::makeStringLit("ce"); strLit__32560; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32561 = ::x10aux::makeStringLit("Control Strategy"); strLit__32561; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32562 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__32562; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32563 = ::x10aux::makeStringLit("sl"); strLit__32563; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32564 = ::x10aux::makeStringLit("solver"); strLit__32564; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32565 = ::x10aux::makeStringLit("Solver to use"); strLit__32565; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32566 = ::x10aux::makeStringLit("of"); strLit__32566; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32567 = ::x10aux::makeStringLit("out_format"); strLit__32567; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32568 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__32568; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32569 = ::x10aux::makeStringLit("tf"); strLit__32569; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32570 = ::x10aux::makeStringLit("target_from"); strLit__32570; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32571 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__32571; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32572 = ::x10aux::makeStringLit("tc"); strLit__32572; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32573 = ::x10aux::makeStringLit("target_cost"); strLit__32573; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32574 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__32574; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32575 = ::x10aux::makeStringLit("b"); strLit__32575; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32576 = ::x10aux::makeStringLit("bench"); strLit__32576; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32577 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__32577; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32578 = ::x10aux::makeStringLit("pf"); strLit__32578; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32579 = ::x10aux::makeStringLit("param_file"); strLit__32579; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32580 = ::x10aux::makeStringLit("path of the parameters file"); strLit__32580; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32581 = ::x10aux::makeStringLit("v"); strLit__32581; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32582 = ::x10aux::makeStringLit("verify"); strLit__32582; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32583 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__32583; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32584 = ::x10aux::makeStringLit("ca"); strLit__32584; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32585 = ::x10aux::makeStringLit("comp_AVG"); strLit__32585; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32586 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__32586; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32587 = ::x10aux::makeStringLit("N"); strLit__32587; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32588 = ::x10aux::makeStringLit("nodes_per_team"); strLit__32588; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32589 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__32589; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32590 = ::x10aux::makeStringLit("U"); strLit__32590; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32591 = ::x10aux::makeStringLit("update"); strLit__32591; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32592 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__32592; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32593 = ::x10aux::makeStringLit("R"); strLit__32593; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32594 = ::x10aux::makeStringLit("report"); strLit__32594; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32595 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__32595; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32596 = ::x10aux::makeStringLit("C"); strLit__32596; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32597 = ::x10aux::makeStringLit("p_change_vector"); strLit__32597; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32598 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__32598; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32599 = ::x10aux::makeStringLit("I"); strLit__32599; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32600 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__32600; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32601 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__32601; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32602 = ::x10aux::makeStringLit("D"); strLit__32602; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32603 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__32603; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32604 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__32604; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32605 = ::x10aux::makeStringLit("W"); strLit__32605; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32606 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__32606; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32607 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__32607; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32608 = ::x10aux::makeStringLit("A"); strLit__32608; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32609 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__32609; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32610 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__32610; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32611 = ::x10aux::makeStringLit("O"); strLit__32611; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32612 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__32612; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32613 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__32613; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32614 = ::x10aux::makeStringLit("M"); strLit__32614; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32615 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__32615; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32616 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__32616; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32617 = ::x10aux::makeStringLit("CD"); strLit__32617; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32618 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__32618; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32619 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__32619; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32620 = ::x10aux::makeStringLit("P_e"); strLit__32620; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32621 = ::x10aux::makeStringLit("poolsize_elite"); strLit__32621; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32622 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__32622; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32623 = ::x10aux::makeStringLit("P_lm"); strLit__32623; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32624 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__32624; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32625 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__32625; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32626 = ::x10aux::makeStringLit("P_eM"); strLit__32626; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32627 = ::x10aux::makeStringLit("ep_mode"); strLit__32627; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32628 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__32628; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32629 = ::x10aux::makeStringLit("P_lmM"); strLit__32629; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32630 = ::x10aux::makeStringLit("lmp_mode"); strLit__32630; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32631 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__32631; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32632 = ::x10aux::makeStringLit("P_eD"); strLit__32632; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32633 = ::x10aux::makeStringLit("ep_dist"); strLit__32633; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32634 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__32634; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32635 = ::x10aux::makeStringLit("P_lmD"); strLit__32635; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32636 = ::x10aux::makeStringLit("lmp_dist"); strLit__32636; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32637 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__32637; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32638 = ::x10aux::makeStringLit("mt"); strLit__32638; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32639 = ::x10aux::makeStringLit("max_time"); strLit__32639; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32640 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__32640; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32641 = ::x10aux::makeStringLit("mi"); strLit__32641; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32642 = ::x10aux::makeStringLit("max_iter"); strLit__32642; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32643 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__32643; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32644 = ::x10aux::makeStringLit("mr"); strLit__32644; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32645 = ::x10aux::makeStringLit("max_restart"); strLit__32645; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32646 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__32646; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32647 = ::x10aux::makeStringLit("rp"); strLit__32647; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32648 = ::x10aux::makeStringLit("rep_partial"); strLit__32648; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32649 = ::x10aux::makeStringLit("report partial results"); strLit__32649; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32650 = ::x10aux::makeStringLit("dbg"); strLit__32650; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32651 = ::x10aux::makeStringLit("debug_terminal"); strLit__32651; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32652 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__32652; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32653 = ::x10aux::makeStringLit("AS_vtr"); strLit__32653; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32654 = ::x10aux::makeStringLit("AS_varToReset"); strLit__32654; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32655 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__32655; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32656 = ::x10aux::makeStringLit("AS_rp"); strLit__32656; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32657 = ::x10aux::makeStringLit("AS_resetPer"); strLit__32657; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32658 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__32658; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32659 = ::x10aux::makeStringLit("AS_flm"); strLit__32659; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32660 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__32660; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32661 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__32661; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32662 = ::x10aux::makeStringLit("AS_fs"); strLit__32662; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32663 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__32663; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32664 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__32664; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32665 = ::x10aux::makeStringLit("AS_rl"); strLit__32665; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32666 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__32666; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32667 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__32667; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32668 = ::x10aux::makeStringLit("AS_plm"); strLit__32668; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32669 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__32669; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32670 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__32670; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32671 = ::x10aux::makeStringLit("AS_e"); strLit__32671; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32672 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__32672; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32673 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__32673; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32674 = ::x10aux::makeStringLit("AS_fb"); strLit__32674; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32675 = ::x10aux::makeStringLit("AS_firstBest"); strLit__32675; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32676 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__32676; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32677 = ::x10aux::makeStringLit("EO_t"); strLit__32677; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32678 = ::x10aux::makeStringLit("EO_tau"); strLit__32678; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32679 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__32679; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32680 = ::x10aux::makeStringLit("EO_p"); strLit__32680; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32681 = ::x10aux::makeStringLit("EO_pdf"); strLit__32681; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32682 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__32682; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32683 = ::x10aux::makeStringLit("EO_ss"); strLit__32683; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32684 = ::x10aux::makeStringLit("EO_selSec"); strLit__32684; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32685 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__32685; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32686 = ::x10aux::makeStringLit("RoTS_t"); strLit__32686; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32687 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__32687; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32688 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__32688; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32689 = ::x10aux::makeStringLit("RoTS_a"); strLit__32689; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32690 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__32690; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32691 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__32691; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32692 = ::x10aux::makeStringLit("GA_pz"); strLit__32692; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32693 = ::x10aux::makeStringLit("GA_population_size"); strLit__32693; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32694 = ::x10aux::makeStringLit("Set the population size. Default 2*n"); strLit__32694; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32695 = ::x10aux::makeStringLit("if"); strLit__32695; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32696 = ::x10aux::makeStringLit("input_vector_file"); strLit__32696; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32697 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__32697; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32698 = ::x10aux::makeStringLit("bv"); strLit__32698; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32699 = ::x10aux::makeStringLit("model_baseValue"); strLit__32699; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32700 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__32700; }))));
                                                         t__32435->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)52ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__32701 = ::x10aux::makeStringLit("LNP_k"); strLit__32701; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32702 = ::x10aux::makeStringLit("LNP_k"); strLit__32702; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__32703 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__32703; }))));
                                                         t__32435;
                                                     }))
                                                     );
    
    //#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    
    //#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 84 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__32704 = ::x10aux::makeStringLit("-pf"); strLit__32704; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__32705 = ::x10aux::makeStringLit("CPLS.param"); strLit__32705; })));
    
    //#line 85 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    try {
        
        //#line 86 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        this->FMGL(paramFile) = ::x10::io::File::_make(this->FMGL(paramFileName));
    }
    catch (::x10::lang::CheckedThrowable* __exc163) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc163)) {
            ::x10::io::IOException* id__6 = static_cast< ::x10::io::IOException*>(__exc163);
            {
                
                //#line 90 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
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



//#line 94 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::parseFile() {
    
    //#line 95 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals(this->FMGL(paramFile), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 96 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32706 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__32706; }))));
        
        //#line 97 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return;
    }
    
    //#line 100 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__24445;
        for (line__24445 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__24445));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__24445));
            
            //#line 102 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(line)->x10::lang::String::length(),
                                         ((x10_int)0)))) {
                continue;
            }
            
            //#line 103 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals((line)->charAt(((x10_int)0)),
                                         ((x10_char)'#'))))
            {
                continue;
            }
            
            //#line 105 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            x10_int sepIndex = ::x10aux::nullCheck(line)->x10::lang::String::indexOf(
                                 this->FMGL(SEPARETOR));
            
            //#line 106 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* key = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                         ((x10_int)0), sepIndex);
            
            //#line 107 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::String* value = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                           ((sepIndex) + (((x10_int)1))));
            
            //#line 108 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            ::x10::lang::Rail< ::x10::lang::String* >* res =
              this->cpls::ParamManager::myGet(key);
            
            //#line 112 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(res, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 114 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                continue;
            } else {
                
                //#line 117 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                ::x10::lang::Any* values = this->howManyValues(
                                             key);
                
                //#line 119 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                if ((::x10aux::struct_equals((::x10aux::class_cast<x10_int>(values)),
                                             ((x10_int)0))))
                {
                    
                    //#line 122 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10aux::nullCheck(this->FMGL(properties))->put(
                      key, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                            value));
                    
                    //#line 123 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::util::Option option = ::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                                   key, ::x10::util::Option::FMGL(BAD__get)());
                    
                    //#line 124 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if ((::x10aux::struct_equals(option, ::x10::util::Option::FMGL(BAD__get)())))
                    {
                        break;
                    }
                    
                    //#line 125 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    ::x10::lang::String* otherForm = option->otherForm(
                                                       key);
                    
                    //#line 126 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    if (((::x10aux::nullCheck(otherForm)->x10::lang::String::length()) > (((x10_int)0))))
                    {
                        ::x10aux::nullCheck(this->FMGL(properties))->put(
                          otherForm, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                                      value));
                    }
                    
                } else {
                    
                    //#line 130 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                    continue;
                }
                
            }
            
        }
    }
    
}

//#line 137 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
::x10::lang::Rail< ::x10::lang::String* >* cpls::ParamManager::myGet(
  ::x10::lang::String* key) {
    
    //#line 138 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* winner = key;
    
    //#line 139 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_boolean isValid = true;
    
    //#line 140 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals((key)->charAt(((x10_int)0)),
                                 ((x10_char)'-')))) {
        
        //#line 141 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       key, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            isValid = false;
        }
        
    } else {
        
        //#line 143 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32715 = ::x10aux::makeStringLit("-"); strLit__32715; })), key);
        
        //#line 144 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 145 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32718 = ::x10aux::makeStringLit("--"); strLit__32718; })), key);
            
            //#line 146 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                           winner, ::x10::util::Option::FMGL(BAD__get)()),
                                         ::x10::util::Option::FMGL(BAD__get)())))
            {
                isValid = false;
            }
            
        }
        
    }
    
    //#line 149 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    if (isValid) {
        return ::x10aux::nullCheck(this->FMGL(properties))->getOrElse(
                 winner, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)0ll)));
        
    } else {
        
        //#line 152 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::String* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
}

//#line 156 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
void cpls::ParamManager::printParameters() {
    
    //#line 157 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* problem = this->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__32723 = ::x10aux::makeStringLit("-p"); strLit__32723; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__32724 = ::x10aux::makeStringLit("MSP"); strLit__32724; })));
    
    //#line 158 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__32725 = ::x10aux::makeStringLit("-f"); strLit__32725; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__32726 = ::x10aux::makeStringLit("."); strLit__32726; })));
    
    //#line 159 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__32727 = ::x10aux::makeStringLit("-s"); strLit__32727; })),
                                                     ((x10_int)10));
    
    //#line 160 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__32728 = ::x10aux::makeStringLit("-sm"); strLit__32728; })),
                           ((x10_int)1));
    
    //#line 161 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__32729 = ::x10aux::makeStringLit("-mi"); strLit__32729; })),
                             ((x10_int)1000000000));
    
    //#line 162 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__32730 = ::x10aux::makeStringLit("-mt"); strLit__32730; })),
                         ((x10_long)0ll));
    
    //#line 163 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__32731 = ::x10aux::makeStringLit("-tc"); strLit__32731; })),
                            ((x10_int)0));
    
    //#line 164 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__32732 = ::x10aux::makeStringLit("-tf"); strLit__32732; })),
                           ((x10_long)0ll));
    
    //#line 165 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__32733 = ::x10aux::makeStringLit("-b"); strLit__32733; })),
                                                       ((x10_int)10));
    
    //#line 166 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__32734 = ::x10aux::makeStringLit("-sl"); strLit__32734; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__32735 = ::x10aux::makeStringLit("AS"); strLit__32735; })));
    
    //#line 167 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__32736 = ::x10aux::makeStringLit("-N"); strLit__32736; })),
                           ((x10_int)1));
    
    //#line 168 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__32737 = ::x10aux::makeStringLit("-U"); strLit__32737; })),
                                                        ((x10_int)0));
    
    //#line 169 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__32738 = ::x10aux::makeStringLit("-R"); strLit__32738; })),
                                                        ((x10_int)0));
    
    //#line 170 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__32739 = ::x10aux::makeStringLit("-C"); strLit__32739; })),
                           ((x10_int)100));
    
    //#line 171 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__32740 = ::x10aux::makeStringLit("-P_e"); strLit__32740; })),
                         ((x10_int)4));
    
    //#line 172 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__32741 = ::x10aux::makeStringLit("-I"); strLit__32741; })),
                         ((x10_long)0ll));
    
    //#line 173 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__32742 = ::x10aux::makeStringLit("-D"); strLit__32742; })),
                               0.3);
    
    //#line 174 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__32743 = ::x10aux::makeStringLit("-W"); strLit__32743; })),
                                                        ((x10_long)0ll));
    
    //#line 175 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__32744 = ::x10aux::makeStringLit("-A"); strLit__32744; })),
                             0.0);
    
    //#line 176 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__32745 = ::x10aux::makeStringLit("-M"); strLit__32745; })),
                            ((x10_int)1));
    
    //#line 177 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__32746 = ::x10aux::makeStringLit("-CD"); strLit__32746; })),
                             ((x10_int)1));
    
    //#line 178 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__32747 = ::x10aux::makeStringLit("-if"); strLit__32747; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__32748 = ::x10aux::makeStringLit("."); strLit__32748; })));
    
    //#line 179 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__32749 = ::x10aux::makeStringLit("-of"); strLit__32749; })),
                          ((x10_int)1));
    
    //#line 181 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32750 = ::x10aux::makeStringLit(""); strLit__32750; }))));
    
    //#line 182 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32751 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__32751; }))));
    
    //#line 183 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32752 = ::x10aux::makeStringLit("Problem "); strLit__32752; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__32753 = ::x10aux::makeStringLit(" size "); strLit__32753; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__32754 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__32754; }))), filePath)));
    
    //#line 184 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32755 = ::x10aux::makeStringLit(""); strLit__32755; }))));
    
    //#line 185 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32756 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__32756; }))));
    
    //#line 186 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32757 = ::x10aux::makeStringLit("Solver: "); strLit__32757; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__32758 = ::x10aux::makeStringLit(", Mode: "); strLit__32758; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__32759 = ::x10aux::makeStringLit("sequential"); strLit__32759; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__32760 = ::x10aux::makeStringLit("parallel"); strLit__32760; })))), (__extension__ ({ static ::x10::lang::String* strLit__32761 = ::x10aux::makeStringLit(", Limit: "); strLit__32761; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__32762 = ::x10aux::makeStringLit(" iterations or "); strLit__32762; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__32763 = ::x10aux::makeStringLit(" ms."); strLit__32763; })))));
    
    //#line 187 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32764 = ::x10aux::makeStringLit("Target cost from "); strLit__32764; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__32765 = ::x10aux::makeStringLit("file. "); strLit__32765; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__32766 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__32766; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__32767 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__32767; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 190 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32768 = ::x10aux::makeStringLit(""); strLit__32768; }))));
    
    //#line 191 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32769 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__32769; }))));
    
    //#line 192 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__32770 = ::x10aux::makeStringLit("Using "); strLit__32770; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__32771 = ::x10aux::makeStringLit("Without "); strLit__32771; }))), (__extension__ ({ static ::x10::lang::String* strLit__32772 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__32772; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__32773 = ::x10aux::makeStringLit(" places. "); strLit__32773; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__32774 = ::x10aux::makeStringLit(" nodes per team "); strLit__32774; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__32775 = ::x10aux::makeStringLit(" Teams"); strLit__32775; })))));
    
    //#line 193 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32776 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__32776; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__32777 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__32777; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__32778 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__32778; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__32779 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__32779; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__32780 = ::x10aux::makeStringLit("%"); strLit__32780; })))));
    
    //#line 194 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32781 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__32781; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__32782 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__32782; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__32783 = ::x10aux::makeStringLit(" Initial delay "); strLit__32783; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__32784 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__32784; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__32785 = ::x10aux::makeStringLit("%"); strLit__32785; })))));
    
    //#line 195 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32786 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__32786; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__32787 = ::x10aux::makeStringLit(" Change Vector "); strLit__32787; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__32788 = ::x10aux::makeStringLit(" - "); strLit__32788; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__32789 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__32789; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__32790 = ::x10aux::makeStringLit(" - "); strLit__32790; }))))));
    
    //#line 196 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32791 = ::x10aux::makeStringLit(""); strLit__32791; }))));
    
    //#line 197 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32792 = ::x10aux::makeStringLit("Other Parameters:"); strLit__32792; }))));
    
    //#line 198 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32793 = ::x10aux::makeStringLit("Max threads "); strLit__32793; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__32794 = ::x10aux::makeStringLit(" NTHREADS "); strLit__32794; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 199 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32795 = ::x10aux::makeStringLit("Solving "); strLit__32795; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__32796 = ::x10aux::makeStringLit(" times each instance"); strLit__32796; })))));
    
    //#line 200 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32797 = ::x10aux::makeStringLit(" Input vector "); strLit__32797; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__32798 = ::x10aux::makeStringLit("."); strLit__32798; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__32799 = ::x10aux::makeStringLit("not used"); strLit__32799; })))
        : (inputPath))));
    
    //#line 201 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32800 = ::x10aux::makeStringLit(""); strLit__32800; }))));
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
