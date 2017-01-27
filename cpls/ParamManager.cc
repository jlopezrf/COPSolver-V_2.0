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

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
void cpls::ParamManager::_constructor(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    (this)->::x10::util::OptionsParser::_constructor(args, (__extension__ ({
                                                         
                                                         //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__23223 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__23223->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23332 = ::x10aux::makeStringLit("h"); strLit__23332; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23333 = ::x10aux::makeStringLit("help"); strLit__23333; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23334 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__23334; }))));
                                                         t__23223;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__23227 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)52ll), false);
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23335 = ::x10aux::makeStringLit("p"); strLit__23335; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23336 = ::x10aux::makeStringLit("problem"); strLit__23336; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23337 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__23337; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23338 = ::x10aux::makeStringLit("f"); strLit__23338; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23339 = ::x10aux::makeStringLit("problem_file"); strLit__23339; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23340 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__23340; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23341 = ::x10aux::makeStringLit("s"); strLit__23341; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23342 = ::x10aux::makeStringLit("size"); strLit__23342; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23343 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__23343; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23344 = ::x10aux::makeStringLit("S"); strLit__23344; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23345 = ::x10aux::makeStringLit("seed"); strLit__23345; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23346 = ::x10aux::makeStringLit("seed. Default 0"); strLit__23346; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23347 = ::x10aux::makeStringLit("sm"); strLit__23347; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23348 = ::x10aux::makeStringLit("solver_mode"); strLit__23348; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23349 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__23349; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23350 = ::x10aux::makeStringLit("ce"); strLit__23350; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23351 = ::x10aux::makeStringLit("Control Strategy"); strLit__23351; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23352 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__23352; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23353 = ::x10aux::makeStringLit("sl"); strLit__23353; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23354 = ::x10aux::makeStringLit("solver"); strLit__23354; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23355 = ::x10aux::makeStringLit("Solver to use"); strLit__23355; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23356 = ::x10aux::makeStringLit("of"); strLit__23356; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23357 = ::x10aux::makeStringLit("out_format"); strLit__23357; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23358 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__23358; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23359 = ::x10aux::makeStringLit("tf"); strLit__23359; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23360 = ::x10aux::makeStringLit("target_from"); strLit__23360; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23361 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__23361; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23362 = ::x10aux::makeStringLit("tc"); strLit__23362; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23363 = ::x10aux::makeStringLit("target_cost"); strLit__23363; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23364 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__23364; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23365 = ::x10aux::makeStringLit("b"); strLit__23365; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23366 = ::x10aux::makeStringLit("bench"); strLit__23366; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23367 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__23367; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23368 = ::x10aux::makeStringLit("pf"); strLit__23368; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23369 = ::x10aux::makeStringLit("param_file"); strLit__23369; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23370 = ::x10aux::makeStringLit("path of the parameters file"); strLit__23370; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23371 = ::x10aux::makeStringLit("v"); strLit__23371; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23372 = ::x10aux::makeStringLit("verify"); strLit__23372; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23373 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__23373; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23374 = ::x10aux::makeStringLit("ca"); strLit__23374; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23375 = ::x10aux::makeStringLit("comp_AVG"); strLit__23375; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23376 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__23376; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23377 = ::x10aux::makeStringLit("N"); strLit__23377; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23378 = ::x10aux::makeStringLit("nodes_per_team"); strLit__23378; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23379 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__23379; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23380 = ::x10aux::makeStringLit("U"); strLit__23380; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23381 = ::x10aux::makeStringLit("update"); strLit__23381; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23382 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations) . Default 0 - no communication."); strLit__23382; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23383 = ::x10aux::makeStringLit("R"); strLit__23383; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23384 = ::x10aux::makeStringLit("report"); strLit__23384; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23385 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations) . Default 0 - no communication."); strLit__23385; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23386 = ::x10aux::makeStringLit("C"); strLit__23386; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23387 = ::x10aux::makeStringLit("p_change_vector"); strLit__23387; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23388 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__23388; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23389 = ::x10aux::makeStringLit("I"); strLit__23389; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23390 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__23390; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23391 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__23391; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23392 = ::x10aux::makeStringLit("D"); strLit__23392; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23393 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__23393; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23394 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__23394; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23395 = ::x10aux::makeStringLit("W"); strLit__23395; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23396 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__23396; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23397 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__23397; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23398 = ::x10aux::makeStringLit("A"); strLit__23398; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23399 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__23399; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23400 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__23400; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23401 = ::x10aux::makeStringLit("O"); strLit__23401; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23402 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__23402; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23403 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__23403; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23404 = ::x10aux::makeStringLit("M"); strLit__23404; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23405 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__23405; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23406 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__23406; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23407 = ::x10aux::makeStringLit("CD"); strLit__23407; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23408 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__23408; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23409 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__23409; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23410 = ::x10aux::makeStringLit("P_e"); strLit__23410; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23411 = ::x10aux::makeStringLit("poolsize_elite"); strLit__23411; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23412 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__23412; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23413 = ::x10aux::makeStringLit("P_lm"); strLit__23413; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23414 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__23414; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23415 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__23415; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23416 = ::x10aux::makeStringLit("P_eM"); strLit__23416; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23417 = ::x10aux::makeStringLit("ep_mode"); strLit__23417; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23418 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__23418; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23419 = ::x10aux::makeStringLit("P_lmM"); strLit__23419; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23420 = ::x10aux::makeStringLit("lmp_mode"); strLit__23420; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23421 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__23421; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23422 = ::x10aux::makeStringLit("P_eD"); strLit__23422; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23423 = ::x10aux::makeStringLit("ep_dist"); strLit__23423; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23424 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__23424; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23425 = ::x10aux::makeStringLit("P_lmD"); strLit__23425; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23426 = ::x10aux::makeStringLit("lmp_dist"); strLit__23426; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23427 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__23427; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23428 = ::x10aux::makeStringLit("mt"); strLit__23428; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23429 = ::x10aux::makeStringLit("max_time"); strLit__23429; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23430 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__23430; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23431 = ::x10aux::makeStringLit("mi"); strLit__23431; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23432 = ::x10aux::makeStringLit("max_iter"); strLit__23432; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23433 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__23433; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23434 = ::x10aux::makeStringLit("mr"); strLit__23434; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23435 = ::x10aux::makeStringLit("max_restart"); strLit__23435; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23436 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__23436; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23437 = ::x10aux::makeStringLit("rp"); strLit__23437; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23438 = ::x10aux::makeStringLit("rep_partial"); strLit__23438; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23439 = ::x10aux::makeStringLit("report partial results"); strLit__23439; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23440 = ::x10aux::makeStringLit("dbg"); strLit__23440; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23441 = ::x10aux::makeStringLit("debug_terminal"); strLit__23441; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23442 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__23442; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23443 = ::x10aux::makeStringLit("AS_vtr"); strLit__23443; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23444 = ::x10aux::makeStringLit("AS_varToReset"); strLit__23444; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23445 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__23445; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23446 = ::x10aux::makeStringLit("AS_rp"); strLit__23446; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23447 = ::x10aux::makeStringLit("AS_resetPer"); strLit__23447; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23448 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__23448; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23449 = ::x10aux::makeStringLit("AS_flm"); strLit__23449; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23450 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__23450; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23451 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__23451; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23452 = ::x10aux::makeStringLit("AS_fs"); strLit__23452; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23453 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__23453; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23454 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__23454; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23455 = ::x10aux::makeStringLit("AS_rl"); strLit__23455; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23456 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__23456; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23457 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__23457; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23458 = ::x10aux::makeStringLit("AS_plm"); strLit__23458; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23459 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__23459; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23460 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__23460; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23461 = ::x10aux::makeStringLit("AS_e"); strLit__23461; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23462 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__23462; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23463 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__23463; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23464 = ::x10aux::makeStringLit("AS_fb"); strLit__23464; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23465 = ::x10aux::makeStringLit("AS_firstBest"); strLit__23465; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23466 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__23466; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23467 = ::x10aux::makeStringLit("EO_t"); strLit__23467; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23468 = ::x10aux::makeStringLit("EO_tau"); strLit__23468; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23469 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__23469; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23470 = ::x10aux::makeStringLit("EO_p"); strLit__23470; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23471 = ::x10aux::makeStringLit("EO_pdf"); strLit__23471; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23472 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__23472; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23473 = ::x10aux::makeStringLit("EO_ss"); strLit__23473; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23474 = ::x10aux::makeStringLit("EO_selSec"); strLit__23474; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23475 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__23475; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23476 = ::x10aux::makeStringLit("RoTS_t"); strLit__23476; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23477 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__23477; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23478 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__23478; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23479 = ::x10aux::makeStringLit("RoTS_a"); strLit__23479; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23480 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__23480; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23481 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__23481; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23482 = ::x10aux::makeStringLit("if"); strLit__23482; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23483 = ::x10aux::makeStringLit("input_vector_file"); strLit__23483; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23484 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__23484; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23485 = ::x10aux::makeStringLit("bv"); strLit__23485; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23486 = ::x10aux::makeStringLit("model_baseValue"); strLit__23486; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23487 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__23487; }))));
                                                         t__23227->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__23488 = ::x10aux::makeStringLit("LNP_k"); strLit__23488; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23489 = ::x10aux::makeStringLit("LNP_k"); strLit__23489; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__23490 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__23490; }))));
                                                         t__23227;
                                                     }))
                                                     );
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__23491 = ::x10aux::makeStringLit("-pf"); strLit__23491; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__23492 = ::x10aux::makeStringLit("CPLS.param"); strLit__23492; })));
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    try {
        
        //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        this->FMGL(paramFile) = ::x10::io::File::_make(this->FMGL(paramFileName));
    }
    catch (::x10::lang::CheckedThrowable* __exc48) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc48)) {
            ::x10::io::IOException* id__5 = static_cast< ::x10::io::IOException*>(__exc48);
            {
                
                //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
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



//#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
void cpls::ParamManager::parseFile() {
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals(this->FMGL(paramFile), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__23493 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__23493; }))));
        
        //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        return;
    }
    
    //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__17522;
        for (line__17522 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__17522));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__17522));
            
            //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(line)->x10::lang::String::length(),
                                         ((x10_int)0)))) {
                continue;
            }
            
            //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals((line)->charAt(((x10_int)0)),
                                         ((x10_char)'#'))))
            {
                continue;
            }
            
            //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            x10_int sepIndex = ::x10aux::nullCheck(line)->x10::lang::String::indexOf(
                                 this->FMGL(SEPARETOR));
            
            //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            ::x10::lang::String* key = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                         ((x10_int)0), sepIndex);
            
            //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            ::x10::lang::String* value = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                           ((sepIndex) + (((x10_int)1))));
            
            //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            ::x10::lang::Rail< ::x10::lang::String* >* res =
              this->cpls::ParamManager::myGet(key);
            
            //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(res, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                continue;
            } else {
                
                //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                ::x10::lang::Any* values = this->howManyValues(
                                             key);
                
                //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                if ((::x10aux::struct_equals((::x10aux::class_cast<x10_int>(values)),
                                             ((x10_int)0))))
                {
                    
                    //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                    ::x10aux::nullCheck(this->FMGL(properties))->put(
                      key, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                            value));
                    
                    //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                    ::x10::util::Option option = ::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                                   key, ::x10::util::Option::FMGL(BAD__get)());
                    
                    //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                    if ((::x10aux::struct_equals(option, ::x10::util::Option::FMGL(BAD__get)())))
                    {
                        break;
                    }
                    
                    //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                    ::x10::lang::String* otherForm = option->otherForm(
                                                       key);
                    
                    //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                    if (((::x10aux::nullCheck(otherForm)->x10::lang::String::length()) > (((x10_int)0))))
                    {
                        ::x10aux::nullCheck(this->FMGL(properties))->put(
                          otherForm, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                                      value));
                    }
                    
                } else {
                    
                    //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                    continue;
                }
                
            }
            
        }
    }
    
}

//#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
::x10::lang::Rail< ::x10::lang::String* >* cpls::ParamManager::myGet(
  ::x10::lang::String* key) {
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::lang::String* winner = key;
    
    //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_boolean isValid = true;
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals((key)->charAt(((x10_int)0)),
                                 ((x10_char)'-')))) {
        
        //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       key, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            isValid = false;
        }
        
    } else {
        
        //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23502 = ::x10aux::makeStringLit("-"); strLit__23502; })), key);
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23505 = ::x10aux::makeStringLit("--"); strLit__23505; })), key);
            
            //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                           winner, ::x10::util::Option::FMGL(BAD__get)()),
                                         ::x10::util::Option::FMGL(BAD__get)())))
            {
                isValid = false;
            }
            
        }
        
    }
    
    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    if (isValid) {
        return ::x10aux::nullCheck(this->FMGL(properties))->getOrElse(
                 winner, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)0ll)));
        
    } else {
        
        //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::String* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
}

//#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
void cpls::ParamManager::printParameters() {
    
    //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::lang::String* problem = this->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__23510 = ::x10aux::makeStringLit("-p"); strLit__23510; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__23511 = ::x10aux::makeStringLit("MSP"); strLit__23511; })));
    
    //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__23512 = ::x10aux::makeStringLit("-f"); strLit__23512; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__23513 = ::x10aux::makeStringLit("."); strLit__23513; })));
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__23514 = ::x10aux::makeStringLit("-s"); strLit__23514; })),
                                                     ((x10_int)10));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__23515 = ::x10aux::makeStringLit("-sm"); strLit__23515; })),
                           ((x10_int)1));
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__23516 = ::x10aux::makeStringLit("-mi"); strLit__23516; })),
                             ((x10_int)1000000000));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__23517 = ::x10aux::makeStringLit("-mt"); strLit__23517; })),
                         ((x10_long)0ll));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__23518 = ::x10aux::makeStringLit("-tc"); strLit__23518; })),
                            ((x10_int)0));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__23519 = ::x10aux::makeStringLit("-tf"); strLit__23519; })),
                           ((x10_long)0ll));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__23520 = ::x10aux::makeStringLit("-b"); strLit__23520; })),
                                                       ((x10_int)10));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__23521 = ::x10aux::makeStringLit("-sl"); strLit__23521; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__23522 = ::x10aux::makeStringLit("AS"); strLit__23522; })));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__23523 = ::x10aux::makeStringLit("-N"); strLit__23523; })),
                           ((x10_int)1));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__23524 = ::x10aux::makeStringLit("-U"); strLit__23524; })),
                                                        ((x10_int)0));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__23525 = ::x10aux::makeStringLit("-R"); strLit__23525; })),
                                                        ((x10_int)0));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__23526 = ::x10aux::makeStringLit("-C"); strLit__23526; })),
                           ((x10_int)100));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__23527 = ::x10aux::makeStringLit("-P_e"); strLit__23527; })),
                         ((x10_int)4));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__23528 = ::x10aux::makeStringLit("-I"); strLit__23528; })),
                         ((x10_long)0ll));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__23529 = ::x10aux::makeStringLit("-D"); strLit__23529; })),
                               0.3);
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__23530 = ::x10aux::makeStringLit("-W"); strLit__23530; })),
                                                        ((x10_long)0ll));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__23531 = ::x10aux::makeStringLit("-A"); strLit__23531; })),
                             0.0);
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__23532 = ::x10aux::makeStringLit("-M"); strLit__23532; })),
                            ((x10_int)1));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__23533 = ::x10aux::makeStringLit("-CD"); strLit__23533; })),
                             ((x10_int)1));
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__23534 = ::x10aux::makeStringLit("-if"); strLit__23534; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__23535 = ::x10aux::makeStringLit("."); strLit__23535; })));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__23536 = ::x10aux::makeStringLit("-of"); strLit__23536; })),
                          ((x10_int)1));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__23537 = ::x10aux::makeStringLit(""); strLit__23537; }))));
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__23538 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__23538; }))));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23539 = ::x10aux::makeStringLit("Problem "); strLit__23539; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__23540 = ::x10aux::makeStringLit(" size "); strLit__23540; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__23541 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__23541; }))), filePath)));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__23542 = ::x10aux::makeStringLit(""); strLit__23542; }))));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__23543 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__23543; }))));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23544 = ::x10aux::makeStringLit("Solver: "); strLit__23544; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__23545 = ::x10aux::makeStringLit(", Mode: "); strLit__23545; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__23546 = ::x10aux::makeStringLit("sequential"); strLit__23546; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__23547 = ::x10aux::makeStringLit("parallel"); strLit__23547; })))), (__extension__ ({ static ::x10::lang::String* strLit__23548 = ::x10aux::makeStringLit(", Limit: "); strLit__23548; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__23549 = ::x10aux::makeStringLit(" iterations or "); strLit__23549; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__23550 = ::x10aux::makeStringLit(" ms."); strLit__23550; })))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23551 = ::x10aux::makeStringLit("Target cost from "); strLit__23551; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__23552 = ::x10aux::makeStringLit("file. "); strLit__23552; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__23553 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__23553; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__23554 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__23554; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__23555 = ::x10aux::makeStringLit(""); strLit__23555; }))));
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__23556 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__23556; }))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__23557 = ::x10aux::makeStringLit("Using "); strLit__23557; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__23558 = ::x10aux::makeStringLit("Without "); strLit__23558; }))), (__extension__ ({ static ::x10::lang::String* strLit__23559 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__23559; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__23560 = ::x10aux::makeStringLit(" places. "); strLit__23560; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__23561 = ::x10aux::makeStringLit(" nodes per team "); strLit__23561; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__23562 = ::x10aux::makeStringLit(" Teams"); strLit__23562; })))));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23563 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__23563; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__23564 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__23564; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__23565 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__23565; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__23566 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__23566; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__23567 = ::x10aux::makeStringLit("%"); strLit__23567; })))));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23568 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__23568; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__23569 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__23569; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__23570 = ::x10aux::makeStringLit(" Initial delay "); strLit__23570; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__23571 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__23571; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__23572 = ::x10aux::makeStringLit("%"); strLit__23572; })))));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23573 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__23573; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__23574 = ::x10aux::makeStringLit(" Change Vector "); strLit__23574; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__23575 = ::x10aux::makeStringLit(" - "); strLit__23575; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__23576 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__23576; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__23577 = ::x10aux::makeStringLit(" - "); strLit__23577; }))))));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__23578 = ::x10aux::makeStringLit(""); strLit__23578; }))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__23579 = ::x10aux::makeStringLit("Other Parameters:"); strLit__23579; }))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23580 = ::x10aux::makeStringLit("Max threads "); strLit__23580; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__23581 = ::x10aux::makeStringLit(" NTHREADS "); strLit__23581; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23582 = ::x10aux::makeStringLit("Solving "); strLit__23582; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__23583 = ::x10aux::makeStringLit(" times each instance"); strLit__23583; })))));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23584 = ::x10aux::makeStringLit(" Input vector "); strLit__23584; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__23585 = ::x10aux::makeStringLit("."); strLit__23585; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__23586 = ::x10aux::makeStringLit("not used"); strLit__23586; })))
        : (inputPath))));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__23587 = ::x10aux::makeStringLit(""); strLit__23587; }))));
}

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
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
