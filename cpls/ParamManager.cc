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
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__39145 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__39145->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39258 = ::x10aux::makeStringLit("h"); strLit__39258; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39259 = ::x10aux::makeStringLit("help"); strLit__39259; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39260 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__39260; }))));
                                                         t__39145;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__39149 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)54ll), false);
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39261 = ::x10aux::makeStringLit("p"); strLit__39261; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39262 = ::x10aux::makeStringLit("problem"); strLit__39262; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39263 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__39263; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39264 = ::x10aux::makeStringLit("f"); strLit__39264; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39265 = ::x10aux::makeStringLit("problem_file"); strLit__39265; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39266 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__39266; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39267 = ::x10aux::makeStringLit("s"); strLit__39267; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39268 = ::x10aux::makeStringLit("size"); strLit__39268; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39269 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__39269; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39270 = ::x10aux::makeStringLit("S"); strLit__39270; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39271 = ::x10aux::makeStringLit("seed"); strLit__39271; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39272 = ::x10aux::makeStringLit("seed. Default 0"); strLit__39272; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39273 = ::x10aux::makeStringLit("sm"); strLit__39273; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39274 = ::x10aux::makeStringLit("solver_mode"); strLit__39274; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39275 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__39275; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39276 = ::x10aux::makeStringLit("ce"); strLit__39276; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39277 = ::x10aux::makeStringLit("Control Strategy"); strLit__39277; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39278 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__39278; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39279 = ::x10aux::makeStringLit("sl"); strLit__39279; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39280 = ::x10aux::makeStringLit("solver"); strLit__39280; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39281 = ::x10aux::makeStringLit("Solver to use"); strLit__39281; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39282 = ::x10aux::makeStringLit("of"); strLit__39282; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39283 = ::x10aux::makeStringLit("out_format"); strLit__39283; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39284 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__39284; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39285 = ::x10aux::makeStringLit("tf"); strLit__39285; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39286 = ::x10aux::makeStringLit("target_from"); strLit__39286; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39287 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__39287; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39288 = ::x10aux::makeStringLit("tc"); strLit__39288; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39289 = ::x10aux::makeStringLit("target_cost"); strLit__39289; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39290 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__39290; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39291 = ::x10aux::makeStringLit("b"); strLit__39291; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39292 = ::x10aux::makeStringLit("bench"); strLit__39292; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39293 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__39293; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39294 = ::x10aux::makeStringLit("pf"); strLit__39294; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39295 = ::x10aux::makeStringLit("param_file"); strLit__39295; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39296 = ::x10aux::makeStringLit("path of the parameters file"); strLit__39296; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39297 = ::x10aux::makeStringLit("v"); strLit__39297; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39298 = ::x10aux::makeStringLit("verify"); strLit__39298; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39299 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__39299; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39300 = ::x10aux::makeStringLit("ca"); strLit__39300; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39301 = ::x10aux::makeStringLit("comp_AVG"); strLit__39301; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39302 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__39302; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39303 = ::x10aux::makeStringLit("N"); strLit__39303; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39304 = ::x10aux::makeStringLit("nodes_per_team"); strLit__39304; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39305 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__39305; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39306 = ::x10aux::makeStringLit("U"); strLit__39306; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39307 = ::x10aux::makeStringLit("update"); strLit__39307; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39308 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__39308; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39309 = ::x10aux::makeStringLit("R"); strLit__39309; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39310 = ::x10aux::makeStringLit("report"); strLit__39310; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39311 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__39311; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39312 = ::x10aux::makeStringLit("C"); strLit__39312; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39313 = ::x10aux::makeStringLit("p_change_vector"); strLit__39313; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39314 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__39314; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39315 = ::x10aux::makeStringLit("I"); strLit__39315; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39316 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__39316; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39317 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__39317; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39318 = ::x10aux::makeStringLit("D"); strLit__39318; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39319 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__39319; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39320 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__39320; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39321 = ::x10aux::makeStringLit("W"); strLit__39321; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39322 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__39322; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39323 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__39323; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39324 = ::x10aux::makeStringLit("A"); strLit__39324; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39325 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__39325; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39326 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__39326; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39327 = ::x10aux::makeStringLit("O"); strLit__39327; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39328 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__39328; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39329 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__39329; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39330 = ::x10aux::makeStringLit("M"); strLit__39330; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39331 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__39331; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39332 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__39332; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39333 = ::x10aux::makeStringLit("CD"); strLit__39333; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39334 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__39334; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39335 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__39335; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39336 = ::x10aux::makeStringLit("P_e"); strLit__39336; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39337 = ::x10aux::makeStringLit("poolsize_elite"); strLit__39337; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39338 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__39338; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39339 = ::x10aux::makeStringLit("P_lm"); strLit__39339; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39340 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__39340; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39341 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__39341; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39342 = ::x10aux::makeStringLit("P_eM"); strLit__39342; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39343 = ::x10aux::makeStringLit("ep_mode"); strLit__39343; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39344 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__39344; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39345 = ::x10aux::makeStringLit("P_lmM"); strLit__39345; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39346 = ::x10aux::makeStringLit("lmp_mode"); strLit__39346; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39347 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__39347; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39348 = ::x10aux::makeStringLit("P_eD"); strLit__39348; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39349 = ::x10aux::makeStringLit("ep_dist"); strLit__39349; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39350 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__39350; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39351 = ::x10aux::makeStringLit("P_lmD"); strLit__39351; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39352 = ::x10aux::makeStringLit("lmp_dist"); strLit__39352; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39353 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__39353; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39354 = ::x10aux::makeStringLit("mt"); strLit__39354; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39355 = ::x10aux::makeStringLit("max_time"); strLit__39355; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39356 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__39356; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39357 = ::x10aux::makeStringLit("mi"); strLit__39357; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39358 = ::x10aux::makeStringLit("max_iter"); strLit__39358; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39359 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__39359; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39360 = ::x10aux::makeStringLit("mr"); strLit__39360; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39361 = ::x10aux::makeStringLit("max_restart"); strLit__39361; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39362 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__39362; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39363 = ::x10aux::makeStringLit("rp"); strLit__39363; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39364 = ::x10aux::makeStringLit("rep_partial"); strLit__39364; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39365 = ::x10aux::makeStringLit("report partial results"); strLit__39365; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39366 = ::x10aux::makeStringLit("dbg"); strLit__39366; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39367 = ::x10aux::makeStringLit("debug_terminal"); strLit__39367; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39368 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__39368; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39369 = ::x10aux::makeStringLit("AS_vtr"); strLit__39369; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39370 = ::x10aux::makeStringLit("AS_varToReset"); strLit__39370; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39371 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__39371; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39372 = ::x10aux::makeStringLit("AS_rp"); strLit__39372; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39373 = ::x10aux::makeStringLit("AS_resetPer"); strLit__39373; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39374 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__39374; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39375 = ::x10aux::makeStringLit("AS_flm"); strLit__39375; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39376 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__39376; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39377 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__39377; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39378 = ::x10aux::makeStringLit("AS_fs"); strLit__39378; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39379 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__39379; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39380 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__39380; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39381 = ::x10aux::makeStringLit("AS_rl"); strLit__39381; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39382 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__39382; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39383 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__39383; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39384 = ::x10aux::makeStringLit("AS_plm"); strLit__39384; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39385 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__39385; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39386 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__39386; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39387 = ::x10aux::makeStringLit("AS_e"); strLit__39387; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39388 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__39388; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39389 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__39389; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39390 = ::x10aux::makeStringLit("AS_fb"); strLit__39390; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39391 = ::x10aux::makeStringLit("AS_firstBest"); strLit__39391; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39392 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__39392; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39393 = ::x10aux::makeStringLit("EO_t"); strLit__39393; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39394 = ::x10aux::makeStringLit("EO_tau"); strLit__39394; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39395 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__39395; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39396 = ::x10aux::makeStringLit("EO_p"); strLit__39396; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39397 = ::x10aux::makeStringLit("EO_pdf"); strLit__39397; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39398 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__39398; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39399 = ::x10aux::makeStringLit("EO_ss"); strLit__39399; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39400 = ::x10aux::makeStringLit("EO_selSec"); strLit__39400; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39401 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__39401; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39402 = ::x10aux::makeStringLit("RoTS_t"); strLit__39402; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39403 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__39403; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39404 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__39404; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39405 = ::x10aux::makeStringLit("RoTS_a"); strLit__39405; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39406 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__39406; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39407 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__39407; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39408 = ::x10aux::makeStringLit("GA_pz"); strLit__39408; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39409 = ::x10aux::makeStringLit("GA_population_size"); strLit__39409; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39410 = ::x10aux::makeStringLit("Set the population size. Default 2*n"); strLit__39410; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39411 = ::x10aux::makeStringLit("GA_mr"); strLit__39411; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39412 = ::x10aux::makeStringLit("GA_mutation_rate"); strLit__39412; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39413 = ::x10aux::makeStringLit("Set the mutation rate. Default 40\\%"); strLit__39413; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39414 = ::x10aux::makeStringLit("if"); strLit__39414; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39415 = ::x10aux::makeStringLit("input_vector_file"); strLit__39415; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39416 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__39416; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)52ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39417 = ::x10aux::makeStringLit("bv"); strLit__39417; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39418 = ::x10aux::makeStringLit("model_baseValue"); strLit__39418; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39419 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__39419; }))));
                                                         t__39149->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)53ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__39420 = ::x10aux::makeStringLit("LNP_k"); strLit__39420; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39421 = ::x10aux::makeStringLit("LNP_k"); strLit__39421; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__39422 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__39422; }))));
                                                         t__39149;
                                                     }))
                                                     );
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__39423 = ::x10aux::makeStringLit("-pf"); strLit__39423; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__39424 = ::x10aux::makeStringLit("CPLS.param"); strLit__39424; })));
    
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
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39425 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__39425; }))));
        
        //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return;
    }
    
    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__31046;
        for (line__31046 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__31046));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__31046));
            
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
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39434 = ::x10aux::makeStringLit("-"); strLit__39434; })), key);
        
        //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39437 = ::x10aux::makeStringLit("--"); strLit__39437; })), key);
            
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
                                     (__extension__ ({ static ::x10::lang::String* strLit__39442 = ::x10aux::makeStringLit("-p"); strLit__39442; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__39443 = ::x10aux::makeStringLit("MSP"); strLit__39443; })));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__39444 = ::x10aux::makeStringLit("-f"); strLit__39444; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__39445 = ::x10aux::makeStringLit("."); strLit__39445; })));
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__39446 = ::x10aux::makeStringLit("-s"); strLit__39446; })),
                                                     ((x10_int)10));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__39447 = ::x10aux::makeStringLit("-sm"); strLit__39447; })),
                           ((x10_int)1));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__39448 = ::x10aux::makeStringLit("-mi"); strLit__39448; })),
                             ((x10_int)1000000000));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__39449 = ::x10aux::makeStringLit("-mt"); strLit__39449; })),
                         ((x10_long)0ll));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__39450 = ::x10aux::makeStringLit("-tc"); strLit__39450; })),
                            ((x10_int)0));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__39451 = ::x10aux::makeStringLit("-tf"); strLit__39451; })),
                           ((x10_long)0ll));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__39452 = ::x10aux::makeStringLit("-b"); strLit__39452; })),
                                                       ((x10_int)10));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__39453 = ::x10aux::makeStringLit("-sl"); strLit__39453; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__39454 = ::x10aux::makeStringLit("AS"); strLit__39454; })));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__39455 = ::x10aux::makeStringLit("-N"); strLit__39455; })),
                           ((x10_int)1));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__39456 = ::x10aux::makeStringLit("-U"); strLit__39456; })),
                                                        ((x10_int)0));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__39457 = ::x10aux::makeStringLit("-R"); strLit__39457; })),
                                                        ((x10_int)0));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__39458 = ::x10aux::makeStringLit("-C"); strLit__39458; })),
                           ((x10_int)100));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__39459 = ::x10aux::makeStringLit("-P_e"); strLit__39459; })),
                         ((x10_int)4));
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__39460 = ::x10aux::makeStringLit("-I"); strLit__39460; })),
                         ((x10_long)0ll));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__39461 = ::x10aux::makeStringLit("-D"); strLit__39461; })),
                               0.3);
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__39462 = ::x10aux::makeStringLit("-W"); strLit__39462; })),
                                                        ((x10_long)0ll));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__39463 = ::x10aux::makeStringLit("-A"); strLit__39463; })),
                             0.0);
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__39464 = ::x10aux::makeStringLit("-M"); strLit__39464; })),
                            ((x10_int)1));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__39465 = ::x10aux::makeStringLit("-CD"); strLit__39465; })),
                             ((x10_int)1));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__39466 = ::x10aux::makeStringLit("-if"); strLit__39466; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__39467 = ::x10aux::makeStringLit("."); strLit__39467; })));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__39468 = ::x10aux::makeStringLit("-of"); strLit__39468; })),
                          ((x10_int)1));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39469 = ::x10aux::makeStringLit(""); strLit__39469; }))));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39470 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__39470; }))));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39471 = ::x10aux::makeStringLit("Problem "); strLit__39471; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__39472 = ::x10aux::makeStringLit(" size "); strLit__39472; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__39473 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__39473; }))), filePath)));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39474 = ::x10aux::makeStringLit(""); strLit__39474; }))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39475 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__39475; }))));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39476 = ::x10aux::makeStringLit("Solver: "); strLit__39476; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__39477 = ::x10aux::makeStringLit(", Mode: "); strLit__39477; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39478 = ::x10aux::makeStringLit("sequential"); strLit__39478; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__39479 = ::x10aux::makeStringLit("parallel"); strLit__39479; })))), (__extension__ ({ static ::x10::lang::String* strLit__39480 = ::x10aux::makeStringLit(", Limit: "); strLit__39480; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__39481 = ::x10aux::makeStringLit(" iterations or "); strLit__39481; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__39482 = ::x10aux::makeStringLit(" ms."); strLit__39482; })))));
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39483 = ::x10aux::makeStringLit("Target cost from "); strLit__39483; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39484 = ::x10aux::makeStringLit("file. "); strLit__39484; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__39485 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__39485; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__39486 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__39486; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39487 = ::x10aux::makeStringLit(""); strLit__39487; }))));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39488 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__39488; }))));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39489 = ::x10aux::makeStringLit("Using "); strLit__39489; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__39490 = ::x10aux::makeStringLit("Without "); strLit__39490; }))), (__extension__ ({ static ::x10::lang::String* strLit__39491 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__39491; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__39492 = ::x10aux::makeStringLit(" places. "); strLit__39492; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__39493 = ::x10aux::makeStringLit(" nodes per team "); strLit__39493; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__39494 = ::x10aux::makeStringLit(" Teams"); strLit__39494; })))));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39495 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__39495; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__39496 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__39496; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__39497 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__39497; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__39498 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__39498; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__39499 = ::x10aux::makeStringLit("%"); strLit__39499; })))));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39500 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__39500; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__39501 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__39501; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__39502 = ::x10aux::makeStringLit(" Initial delay "); strLit__39502; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__39503 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__39503; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__39504 = ::x10aux::makeStringLit("%"); strLit__39504; })))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39505 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__39505; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39506 = ::x10aux::makeStringLit(" Change Vector "); strLit__39506; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__39507 = ::x10aux::makeStringLit(" - "); strLit__39507; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39508 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__39508; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__39509 = ::x10aux::makeStringLit(" - "); strLit__39509; }))))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39510 = ::x10aux::makeStringLit(""); strLit__39510; }))));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39511 = ::x10aux::makeStringLit("Other Parameters:"); strLit__39511; }))));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39512 = ::x10aux::makeStringLit("Max threads "); strLit__39512; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__39513 = ::x10aux::makeStringLit(" NTHREADS "); strLit__39513; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39514 = ::x10aux::makeStringLit("Solving "); strLit__39514; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__39515 = ::x10aux::makeStringLit(" times each instance"); strLit__39515; })))));
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39516 = ::x10aux::makeStringLit(" Input vector "); strLit__39516; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__39517 = ::x10aux::makeStringLit("."); strLit__39517; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__39518 = ::x10aux::makeStringLit("not used"); strLit__39518; })))
        : (inputPath))));
    
    //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39519 = ::x10aux::makeStringLit(""); strLit__39519; }))));
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
