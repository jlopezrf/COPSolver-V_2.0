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
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__25070 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__25070->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25181 = ::x10aux::makeStringLit("h"); strLit__25181; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25182 = ::x10aux::makeStringLit("help"); strLit__25182; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25183 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__25183; }))));
                                                         t__25070;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__25074 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)53ll), false);
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25184 = ::x10aux::makeStringLit("p"); strLit__25184; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25185 = ::x10aux::makeStringLit("problem"); strLit__25185; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25186 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__25186; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25187 = ::x10aux::makeStringLit("f"); strLit__25187; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25188 = ::x10aux::makeStringLit("problem_file"); strLit__25188; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25189 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__25189; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25190 = ::x10aux::makeStringLit("s"); strLit__25190; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25191 = ::x10aux::makeStringLit("size"); strLit__25191; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25192 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__25192; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25193 = ::x10aux::makeStringLit("S"); strLit__25193; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25194 = ::x10aux::makeStringLit("seed"); strLit__25194; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25195 = ::x10aux::makeStringLit("seed. Default 0"); strLit__25195; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25196 = ::x10aux::makeStringLit("sm"); strLit__25196; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25197 = ::x10aux::makeStringLit("solver_mode"); strLit__25197; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25198 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__25198; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25199 = ::x10aux::makeStringLit("ce"); strLit__25199; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25200 = ::x10aux::makeStringLit("Control Strategy"); strLit__25200; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25201 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__25201; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25202 = ::x10aux::makeStringLit("sl"); strLit__25202; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25203 = ::x10aux::makeStringLit("solver"); strLit__25203; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25204 = ::x10aux::makeStringLit("Solver to use"); strLit__25204; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25205 = ::x10aux::makeStringLit("of"); strLit__25205; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25206 = ::x10aux::makeStringLit("out_format"); strLit__25206; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25207 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__25207; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25208 = ::x10aux::makeStringLit("tf"); strLit__25208; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25209 = ::x10aux::makeStringLit("target_from"); strLit__25209; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25210 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__25210; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25211 = ::x10aux::makeStringLit("tc"); strLit__25211; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25212 = ::x10aux::makeStringLit("target_cost"); strLit__25212; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25213 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__25213; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25214 = ::x10aux::makeStringLit("b"); strLit__25214; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25215 = ::x10aux::makeStringLit("bench"); strLit__25215; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25216 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__25216; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25217 = ::x10aux::makeStringLit("pf"); strLit__25217; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25218 = ::x10aux::makeStringLit("param_file"); strLit__25218; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25219 = ::x10aux::makeStringLit("path of the parameters file"); strLit__25219; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25220 = ::x10aux::makeStringLit("v"); strLit__25220; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25221 = ::x10aux::makeStringLit("verify"); strLit__25221; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25222 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__25222; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25223 = ::x10aux::makeStringLit("ca"); strLit__25223; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25224 = ::x10aux::makeStringLit("comp_AVG"); strLit__25224; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25225 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__25225; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25226 = ::x10aux::makeStringLit("N"); strLit__25226; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25227 = ::x10aux::makeStringLit("nodes_per_team"); strLit__25227; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25228 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__25228; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25229 = ::x10aux::makeStringLit("U"); strLit__25229; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25230 = ::x10aux::makeStringLit("update"); strLit__25230; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25231 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__25231; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25232 = ::x10aux::makeStringLit("R"); strLit__25232; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25233 = ::x10aux::makeStringLit("report"); strLit__25233; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25234 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__25234; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25235 = ::x10aux::makeStringLit("C"); strLit__25235; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25236 = ::x10aux::makeStringLit("p_change_vector"); strLit__25236; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25237 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__25237; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25238 = ::x10aux::makeStringLit("I"); strLit__25238; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25239 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__25239; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25240 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__25240; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25241 = ::x10aux::makeStringLit("D"); strLit__25241; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25242 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__25242; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25243 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__25243; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25244 = ::x10aux::makeStringLit("W"); strLit__25244; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25245 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__25245; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25246 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__25246; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25247 = ::x10aux::makeStringLit("A"); strLit__25247; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25248 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__25248; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25249 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__25249; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25250 = ::x10aux::makeStringLit("O"); strLit__25250; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25251 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__25251; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25252 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__25252; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25253 = ::x10aux::makeStringLit("M"); strLit__25253; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25254 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__25254; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25255 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__25255; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25256 = ::x10aux::makeStringLit("CD"); strLit__25256; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25257 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__25257; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25258 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__25258; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25259 = ::x10aux::makeStringLit("P_e"); strLit__25259; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25260 = ::x10aux::makeStringLit("poolsize_elite"); strLit__25260; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25261 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__25261; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25262 = ::x10aux::makeStringLit("P_lm"); strLit__25262; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25263 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__25263; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25264 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__25264; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25265 = ::x10aux::makeStringLit("P_eM"); strLit__25265; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25266 = ::x10aux::makeStringLit("ep_mode"); strLit__25266; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25267 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__25267; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25268 = ::x10aux::makeStringLit("P_lmM"); strLit__25268; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25269 = ::x10aux::makeStringLit("lmp_mode"); strLit__25269; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25270 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__25270; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25271 = ::x10aux::makeStringLit("P_eD"); strLit__25271; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25272 = ::x10aux::makeStringLit("ep_dist"); strLit__25272; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25273 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__25273; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25274 = ::x10aux::makeStringLit("P_lmD"); strLit__25274; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25275 = ::x10aux::makeStringLit("lmp_dist"); strLit__25275; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25276 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__25276; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25277 = ::x10aux::makeStringLit("mt"); strLit__25277; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25278 = ::x10aux::makeStringLit("max_time"); strLit__25278; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25279 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__25279; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25280 = ::x10aux::makeStringLit("mi"); strLit__25280; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25281 = ::x10aux::makeStringLit("max_iter"); strLit__25281; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25282 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__25282; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25283 = ::x10aux::makeStringLit("mr"); strLit__25283; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25284 = ::x10aux::makeStringLit("max_restart"); strLit__25284; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25285 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__25285; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25286 = ::x10aux::makeStringLit("rp"); strLit__25286; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25287 = ::x10aux::makeStringLit("rep_partial"); strLit__25287; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25288 = ::x10aux::makeStringLit("report partial results"); strLit__25288; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25289 = ::x10aux::makeStringLit("dbg"); strLit__25289; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25290 = ::x10aux::makeStringLit("debug_terminal"); strLit__25290; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25291 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__25291; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25292 = ::x10aux::makeStringLit("AS_vtr"); strLit__25292; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25293 = ::x10aux::makeStringLit("AS_varToReset"); strLit__25293; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25294 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__25294; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25295 = ::x10aux::makeStringLit("AS_rp"); strLit__25295; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25296 = ::x10aux::makeStringLit("AS_resetPer"); strLit__25296; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25297 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__25297; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25298 = ::x10aux::makeStringLit("AS_flm"); strLit__25298; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25299 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__25299; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25300 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__25300; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25301 = ::x10aux::makeStringLit("AS_fs"); strLit__25301; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25302 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__25302; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25303 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__25303; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25304 = ::x10aux::makeStringLit("AS_rl"); strLit__25304; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25305 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__25305; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25306 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__25306; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25307 = ::x10aux::makeStringLit("AS_plm"); strLit__25307; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25308 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__25308; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25309 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__25309; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25310 = ::x10aux::makeStringLit("AS_e"); strLit__25310; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25311 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__25311; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25312 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__25312; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25313 = ::x10aux::makeStringLit("AS_fb"); strLit__25313; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25314 = ::x10aux::makeStringLit("AS_firstBest"); strLit__25314; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25315 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__25315; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25316 = ::x10aux::makeStringLit("EO_t"); strLit__25316; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25317 = ::x10aux::makeStringLit("EO_tau"); strLit__25317; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25318 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__25318; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25319 = ::x10aux::makeStringLit("EO_p"); strLit__25319; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25320 = ::x10aux::makeStringLit("EO_pdf"); strLit__25320; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25321 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__25321; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25322 = ::x10aux::makeStringLit("EO_ss"); strLit__25322; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25323 = ::x10aux::makeStringLit("EO_selSec"); strLit__25323; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25324 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__25324; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25325 = ::x10aux::makeStringLit("RoTS_t"); strLit__25325; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25326 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__25326; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25327 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__25327; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25328 = ::x10aux::makeStringLit("RoTS_a"); strLit__25328; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25329 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__25329; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25330 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__25330; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25331 = ::x10aux::makeStringLit("GA_pz"); strLit__25331; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25332 = ::x10aux::makeStringLit("GA_population_size"); strLit__25332; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25333 = ::x10aux::makeStringLit("Set the population size. Default 2*n"); strLit__25333; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25334 = ::x10aux::makeStringLit("if"); strLit__25334; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25335 = ::x10aux::makeStringLit("input_vector_file"); strLit__25335; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25336 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__25336; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25337 = ::x10aux::makeStringLit("bv"); strLit__25337; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25338 = ::x10aux::makeStringLit("model_baseValue"); strLit__25338; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25339 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__25339; }))));
                                                         t__25074->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)52ll),
                                                           ::x10::util::Option::_make((__extension__ ({ static ::x10::lang::String* strLit__25340 = ::x10aux::makeStringLit("LNP_k"); strLit__25340; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25341 = ::x10aux::makeStringLit("LNP_k"); strLit__25341; })),
                                                                                      (__extension__ ({ static ::x10::lang::String* strLit__25342 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__25342; }))));
                                                         t__25074;
                                                     }))
                                                     );
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->cpls::ParamManager::__fieldInitializers_cpls_ParamManager();
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__25343 = ::x10aux::makeStringLit("-pf"); strLit__25343; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__25344 = ::x10aux::makeStringLit("CPLS.param"); strLit__25344; })));
    
    //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    try {
        
        //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        this->FMGL(paramFile) = ::x10::io::File::_make(this->FMGL(paramFileName));
    }
    catch (::x10::lang::CheckedThrowable* __exc94) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc94)) {
            ::x10::io::IOException* id__4 = static_cast< ::x10::io::IOException*>(__exc94);
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
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25345 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__25345; }))));
        
        //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        return;
    }
    
    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__19712;
        for (line__19712 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__19712));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__19712));
            
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
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25354 = ::x10aux::makeStringLit("-"); strLit__25354; })), key);
        
        //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25357 = ::x10aux::makeStringLit("--"); strLit__25357; })), key);
            
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
                                     (__extension__ ({ static ::x10::lang::String* strLit__25362 = ::x10aux::makeStringLit("-p"); strLit__25362; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__25363 = ::x10aux::makeStringLit("MSP"); strLit__25363; })));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__25364 = ::x10aux::makeStringLit("-f"); strLit__25364; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__25365 = ::x10aux::makeStringLit("."); strLit__25365; })));
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__25366 = ::x10aux::makeStringLit("-s"); strLit__25366; })),
                                                     ((x10_int)10));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__25367 = ::x10aux::makeStringLit("-sm"); strLit__25367; })),
                           ((x10_int)1));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__25368 = ::x10aux::makeStringLit("-mi"); strLit__25368; })),
                             ((x10_int)1000000000));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__25369 = ::x10aux::makeStringLit("-mt"); strLit__25369; })),
                         ((x10_long)0ll));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__25370 = ::x10aux::makeStringLit("-tc"); strLit__25370; })),
                            ((x10_int)0));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__25371 = ::x10aux::makeStringLit("-tf"); strLit__25371; })),
                           ((x10_long)0ll));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__25372 = ::x10aux::makeStringLit("-b"); strLit__25372; })),
                                                       ((x10_int)10));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__25373 = ::x10aux::makeStringLit("-sl"); strLit__25373; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__25374 = ::x10aux::makeStringLit("AS"); strLit__25374; })));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__25375 = ::x10aux::makeStringLit("-N"); strLit__25375; })),
                           ((x10_int)1));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__25376 = ::x10aux::makeStringLit("-U"); strLit__25376; })),
                                                        ((x10_int)0));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__25377 = ::x10aux::makeStringLit("-R"); strLit__25377; })),
                                                        ((x10_int)0));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__25378 = ::x10aux::makeStringLit("-C"); strLit__25378; })),
                           ((x10_int)100));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__25379 = ::x10aux::makeStringLit("-P_e"); strLit__25379; })),
                         ((x10_int)4));
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__25380 = ::x10aux::makeStringLit("-I"); strLit__25380; })),
                         ((x10_long)0ll));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__25381 = ::x10aux::makeStringLit("-D"); strLit__25381; })),
                               0.3);
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__25382 = ::x10aux::makeStringLit("-W"); strLit__25382; })),
                                                        ((x10_long)0ll));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__25383 = ::x10aux::makeStringLit("-A"); strLit__25383; })),
                             0.0);
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__25384 = ::x10aux::makeStringLit("-M"); strLit__25384; })),
                            ((x10_int)1));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__25385 = ::x10aux::makeStringLit("-CD"); strLit__25385; })),
                             ((x10_int)1));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__25386 = ::x10aux::makeStringLit("-if"); strLit__25386; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__25387 = ::x10aux::makeStringLit("."); strLit__25387; })));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__25388 = ::x10aux::makeStringLit("-of"); strLit__25388; })),
                          ((x10_int)1));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25389 = ::x10aux::makeStringLit(""); strLit__25389; }))));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25390 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__25390; }))));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25391 = ::x10aux::makeStringLit("Problem "); strLit__25391; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__25392 = ::x10aux::makeStringLit(" size "); strLit__25392; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__25393 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__25393; }))), filePath)));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25394 = ::x10aux::makeStringLit(""); strLit__25394; }))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25395 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__25395; }))));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25396 = ::x10aux::makeStringLit("Solver: "); strLit__25396; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__25397 = ::x10aux::makeStringLit(", Mode: "); strLit__25397; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__25398 = ::x10aux::makeStringLit("sequential"); strLit__25398; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__25399 = ::x10aux::makeStringLit("parallel"); strLit__25399; })))), (__extension__ ({ static ::x10::lang::String* strLit__25400 = ::x10aux::makeStringLit(", Limit: "); strLit__25400; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__25401 = ::x10aux::makeStringLit(" iterations or "); strLit__25401; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__25402 = ::x10aux::makeStringLit(" ms."); strLit__25402; })))));
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25403 = ::x10aux::makeStringLit("Target cost from "); strLit__25403; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__25404 = ::x10aux::makeStringLit("file. "); strLit__25404; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__25405 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__25405; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__25406 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__25406; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25407 = ::x10aux::makeStringLit(""); strLit__25407; }))));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25408 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__25408; }))));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__25409 = ::x10aux::makeStringLit("Using "); strLit__25409; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__25410 = ::x10aux::makeStringLit("Without "); strLit__25410; }))), (__extension__ ({ static ::x10::lang::String* strLit__25411 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__25411; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__25412 = ::x10aux::makeStringLit(" places. "); strLit__25412; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__25413 = ::x10aux::makeStringLit(" nodes per team "); strLit__25413; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__25414 = ::x10aux::makeStringLit(" Teams"); strLit__25414; })))));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25415 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__25415; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__25416 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__25416; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__25417 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__25417; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__25418 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__25418; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__25419 = ::x10aux::makeStringLit("%"); strLit__25419; })))));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25420 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__25420; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__25421 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__25421; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__25422 = ::x10aux::makeStringLit(" Initial delay "); strLit__25422; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__25423 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__25423; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__25424 = ::x10aux::makeStringLit("%"); strLit__25424; })))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25425 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__25425; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__25426 = ::x10aux::makeStringLit(" Change Vector "); strLit__25426; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__25427 = ::x10aux::makeStringLit(" - "); strLit__25427; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__25428 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__25428; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__25429 = ::x10aux::makeStringLit(" - "); strLit__25429; }))))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25430 = ::x10aux::makeStringLit(""); strLit__25430; }))));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25431 = ::x10aux::makeStringLit("Other Parameters:"); strLit__25431; }))));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25432 = ::x10aux::makeStringLit("Max threads "); strLit__25432; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__25433 = ::x10aux::makeStringLit(" NTHREADS "); strLit__25433; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25434 = ::x10aux::makeStringLit("Solving "); strLit__25434; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__25435 = ::x10aux::makeStringLit(" times each instance"); strLit__25435; })))));
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25436 = ::x10aux::makeStringLit(" Input vector "); strLit__25436; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__25437 = ::x10aux::makeStringLit("."); strLit__25437; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__25438 = ::x10aux::makeStringLit("not used"); strLit__25438; })))
        : (inputPath))));
    
    //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25439 = ::x10aux::makeStringLit(""); strLit__25439; }))));
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
