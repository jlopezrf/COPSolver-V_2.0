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

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
void cpls::ParamManager::_constructor(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    (this)->::x10::util::OptionsParser::_constructor(args, (__extension__ ({
                                                         
                                                         //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__14866 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__14866->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           (__extension__ ({
                                                               ::x10::util::Option alloc__5936 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14699 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14979 = ::x10aux::makeStringLit("h"); strLit__14979; }));
                                                               ::x10::lang::String* l__14700 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14980 = ::x10aux::makeStringLit("help"); strLit__14980; }));
                                                               ::x10::lang::String* d__14701 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14981 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__14981; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5936)->::x10::util::Option::_constructor(
                                                                 s__14699,
                                                                 l__14700,
                                                                 d__14701,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5936;
                                                           }))
                                                           );
                                                         t__14866;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__14870 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)54ll), false);
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5937 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14702 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14982 = ::x10aux::makeStringLit("p"); strLit__14982; }));
                                                               ::x10::lang::String* l__14703 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14983 = ::x10aux::makeStringLit("problem"); strLit__14983; }));
                                                               ::x10::lang::String* d__14704 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14984 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__14984; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5937)->::x10::util::Option::_constructor(
                                                                 s__14702,
                                                                 l__14703,
                                                                 d__14704,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5937;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5938 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14705 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14985 = ::x10aux::makeStringLit("f"); strLit__14985; }));
                                                               ::x10::lang::String* l__14706 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14986 = ::x10aux::makeStringLit("problem_file"); strLit__14986; }));
                                                               ::x10::lang::String* d__14707 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14987 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__14987; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5938)->::x10::util::Option::_constructor(
                                                                 s__14705,
                                                                 l__14706,
                                                                 d__14707,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5938;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5939 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14708 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14988 = ::x10aux::makeStringLit("s"); strLit__14988; }));
                                                               ::x10::lang::String* l__14709 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14989 = ::x10aux::makeStringLit("size"); strLit__14989; }));
                                                               ::x10::lang::String* d__14710 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14990 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__14990; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5939)->::x10::util::Option::_constructor(
                                                                 s__14708,
                                                                 l__14709,
                                                                 d__14710,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5939;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5940 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14711 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14991 = ::x10aux::makeStringLit("S"); strLit__14991; }));
                                                               ::x10::lang::String* l__14712 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14992 = ::x10aux::makeStringLit("seed"); strLit__14992; }));
                                                               ::x10::lang::String* d__14713 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14993 = ::x10aux::makeStringLit("seed. Default 0"); strLit__14993; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5940)->::x10::util::Option::_constructor(
                                                                 s__14711,
                                                                 l__14712,
                                                                 d__14713,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5940;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5941 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14714 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14994 = ::x10aux::makeStringLit("sm"); strLit__14994; }));
                                                               ::x10::lang::String* l__14715 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14995 = ::x10aux::makeStringLit("solver_mode"); strLit__14995; }));
                                                               ::x10::lang::String* d__14716 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14996 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__14996; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5941)->::x10::util::Option::_constructor(
                                                                 s__14714,
                                                                 l__14715,
                                                                 d__14716,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5941;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5942 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14717 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14997 = ::x10aux::makeStringLit("ce"); strLit__14997; }));
                                                               ::x10::lang::String* l__14718 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14998 = ::x10aux::makeStringLit("Control Strategy"); strLit__14998; }));
                                                               ::x10::lang::String* d__14719 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14999 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__14999; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5942)->::x10::util::Option::_constructor(
                                                                 s__14717,
                                                                 l__14718,
                                                                 d__14719,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5942;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5943 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14720 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15000 = ::x10aux::makeStringLit("sl"); strLit__15000; }));
                                                               ::x10::lang::String* l__14721 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15001 = ::x10aux::makeStringLit("solver"); strLit__15001; }));
                                                               ::x10::lang::String* d__14722 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15002 = ::x10aux::makeStringLit("Solver to use"); strLit__15002; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5943)->::x10::util::Option::_constructor(
                                                                 s__14720,
                                                                 l__14721,
                                                                 d__14722,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5943;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5944 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14723 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15003 = ::x10aux::makeStringLit("of"); strLit__15003; }));
                                                               ::x10::lang::String* l__14724 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15004 = ::x10aux::makeStringLit("out_format"); strLit__15004; }));
                                                               ::x10::lang::String* d__14725 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15005 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__15005; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5944)->::x10::util::Option::_constructor(
                                                                 s__14723,
                                                                 l__14724,
                                                                 d__14725,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5944;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5945 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14726 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15006 = ::x10aux::makeStringLit("tf"); strLit__15006; }));
                                                               ::x10::lang::String* l__14727 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15007 = ::x10aux::makeStringLit("target_from"); strLit__15007; }));
                                                               ::x10::lang::String* d__14728 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15008 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__15008; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5945)->::x10::util::Option::_constructor(
                                                                 s__14726,
                                                                 l__14727,
                                                                 d__14728,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5945;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5946 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14729 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15009 = ::x10aux::makeStringLit("tc"); strLit__15009; }));
                                                               ::x10::lang::String* l__14730 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15010 = ::x10aux::makeStringLit("target_cost"); strLit__15010; }));
                                                               ::x10::lang::String* d__14731 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15011 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__15011; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5946)->::x10::util::Option::_constructor(
                                                                 s__14729,
                                                                 l__14730,
                                                                 d__14731,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5946;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5947 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14732 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15012 = ::x10aux::makeStringLit("b"); strLit__15012; }));
                                                               ::x10::lang::String* l__14733 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15013 = ::x10aux::makeStringLit("bench"); strLit__15013; }));
                                                               ::x10::lang::String* d__14734 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15014 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__15014; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5947)->::x10::util::Option::_constructor(
                                                                 s__14732,
                                                                 l__14733,
                                                                 d__14734,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5947;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5948 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14735 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15015 = ::x10aux::makeStringLit("pf"); strLit__15015; }));
                                                               ::x10::lang::String* l__14736 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15016 = ::x10aux::makeStringLit("param_file"); strLit__15016; }));
                                                               ::x10::lang::String* d__14737 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15017 = ::x10aux::makeStringLit("path of the parameters file"); strLit__15017; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5948)->::x10::util::Option::_constructor(
                                                                 s__14735,
                                                                 l__14736,
                                                                 d__14737,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5948;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5949 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14738 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15018 = ::x10aux::makeStringLit("v"); strLit__15018; }));
                                                               ::x10::lang::String* l__14739 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15019 = ::x10aux::makeStringLit("verify"); strLit__15019; }));
                                                               ::x10::lang::String* d__14740 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15020 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__15020; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5949)->::x10::util::Option::_constructor(
                                                                 s__14738,
                                                                 l__14739,
                                                                 d__14740,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5949;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5950 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14741 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15021 = ::x10aux::makeStringLit("ca"); strLit__15021; }));
                                                               ::x10::lang::String* l__14742 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15022 = ::x10aux::makeStringLit("comp_AVG"); strLit__15022; }));
                                                               ::x10::lang::String* d__14743 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15023 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__15023; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5950)->::x10::util::Option::_constructor(
                                                                 s__14741,
                                                                 l__14742,
                                                                 d__14743,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5950;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5951 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14744 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15024 = ::x10aux::makeStringLit("N"); strLit__15024; }));
                                                               ::x10::lang::String* l__14745 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15025 = ::x10aux::makeStringLit("nodes_per_team"); strLit__15025; }));
                                                               ::x10::lang::String* d__14746 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15026 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__15026; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5951)->::x10::util::Option::_constructor(
                                                                 s__14744,
                                                                 l__14745,
                                                                 d__14746,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5951;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5952 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14747 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15027 = ::x10aux::makeStringLit("U"); strLit__15027; }));
                                                               ::x10::lang::String* l__14748 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15028 = ::x10aux::makeStringLit("update"); strLit__15028; }));
                                                               ::x10::lang::String* d__14749 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15029 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__15029; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5952)->::x10::util::Option::_constructor(
                                                                 s__14747,
                                                                 l__14748,
                                                                 d__14749,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5952;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5953 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14750 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15030 = ::x10aux::makeStringLit("R"); strLit__15030; }));
                                                               ::x10::lang::String* l__14751 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15031 = ::x10aux::makeStringLit("report"); strLit__15031; }));
                                                               ::x10::lang::String* d__14752 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15032 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations). Default 0 - no communication."); strLit__15032; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5953)->::x10::util::Option::_constructor(
                                                                 s__14750,
                                                                 l__14751,
                                                                 d__14752,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5953;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5954 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14753 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15033 = ::x10aux::makeStringLit("C"); strLit__15033; }));
                                                               ::x10::lang::String* l__14754 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15034 = ::x10aux::makeStringLit("p_change_vector"); strLit__15034; }));
                                                               ::x10::lang::String* d__14755 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15035 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__15035; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5954)->::x10::util::Option::_constructor(
                                                                 s__14753,
                                                                 l__14754,
                                                                 d__14755,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5954;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5955 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14756 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15036 = ::x10aux::makeStringLit("I"); strLit__15036; }));
                                                               ::x10::lang::String* l__14757 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15037 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__15037; }));
                                                               ::x10::lang::String* d__14758 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15038 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__15038; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5955)->::x10::util::Option::_constructor(
                                                                 s__14756,
                                                                 l__14757,
                                                                 d__14758,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5955;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5956 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14759 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15039 = ::x10aux::makeStringLit("D"); strLit__15039; }));
                                                               ::x10::lang::String* l__14760 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15040 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__15040; }));
                                                               ::x10::lang::String* d__14761 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15041 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__15041; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5956)->::x10::util::Option::_constructor(
                                                                 s__14759,
                                                                 l__14760,
                                                                 d__14761,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5956;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5957 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14762 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15042 = ::x10aux::makeStringLit("W"); strLit__15042; }));
                                                               ::x10::lang::String* l__14763 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15043 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__15043; }));
                                                               ::x10::lang::String* d__14764 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15044 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__15044; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5957)->::x10::util::Option::_constructor(
                                                                 s__14762,
                                                                 l__14763,
                                                                 d__14764,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5957;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5958 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14765 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15045 = ::x10aux::makeStringLit("A"); strLit__15045; }));
                                                               ::x10::lang::String* l__14766 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15046 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__15046; }));
                                                               ::x10::lang::String* d__14767 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15047 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__15047; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5958)->::x10::util::Option::_constructor(
                                                                 s__14765,
                                                                 l__14766,
                                                                 d__14767,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5958;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5959 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14768 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15048 = ::x10aux::makeStringLit("O"); strLit__15048; }));
                                                               ::x10::lang::String* l__14769 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15049 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__15049; }));
                                                               ::x10::lang::String* d__14770 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15050 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__15050; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5959)->::x10::util::Option::_constructor(
                                                                 s__14768,
                                                                 l__14769,
                                                                 d__14770,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5959;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5960 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14771 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15051 = ::x10aux::makeStringLit("M"); strLit__15051; }));
                                                               ::x10::lang::String* l__14772 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15052 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__15052; }));
                                                               ::x10::lang::String* d__14773 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15053 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__15053; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5960)->::x10::util::Option::_constructor(
                                                                 s__14771,
                                                                 l__14772,
                                                                 d__14773,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5960;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5961 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14774 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15054 = ::x10aux::makeStringLit("CD"); strLit__15054; }));
                                                               ::x10::lang::String* l__14775 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15055 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__15055; }));
                                                               ::x10::lang::String* d__14776 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15056 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__15056; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5961)->::x10::util::Option::_constructor(
                                                                 s__14774,
                                                                 l__14775,
                                                                 d__14776,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5961;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5962 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14777 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15057 = ::x10aux::makeStringLit("P_e"); strLit__15057; }));
                                                               ::x10::lang::String* l__14778 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15058 = ::x10aux::makeStringLit("poolsize_elite"); strLit__15058; }));
                                                               ::x10::lang::String* d__14779 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15059 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__15059; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5962)->::x10::util::Option::_constructor(
                                                                 s__14777,
                                                                 l__14778,
                                                                 d__14779,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5962;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5963 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14780 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15060 = ::x10aux::makeStringLit("P_lm"); strLit__15060; }));
                                                               ::x10::lang::String* l__14781 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15061 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__15061; }));
                                                               ::x10::lang::String* d__14782 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15062 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__15062; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5963)->::x10::util::Option::_constructor(
                                                                 s__14780,
                                                                 l__14781,
                                                                 d__14782,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5963;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5964 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14783 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15063 = ::x10aux::makeStringLit("P_eM"); strLit__15063; }));
                                                               ::x10::lang::String* l__14784 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15064 = ::x10aux::makeStringLit("ep_mode"); strLit__15064; }));
                                                               ::x10::lang::String* d__14785 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15065 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__15065; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5964)->::x10::util::Option::_constructor(
                                                                 s__14783,
                                                                 l__14784,
                                                                 d__14785,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5964;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5965 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14786 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15066 = ::x10aux::makeStringLit("P_lmM"); strLit__15066; }));
                                                               ::x10::lang::String* l__14787 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15067 = ::x10aux::makeStringLit("lmp_mode"); strLit__15067; }));
                                                               ::x10::lang::String* d__14788 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15068 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__15068; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5965)->::x10::util::Option::_constructor(
                                                                 s__14786,
                                                                 l__14787,
                                                                 d__14788,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5965;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5966 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14789 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15069 = ::x10aux::makeStringLit("P_eD"); strLit__15069; }));
                                                               ::x10::lang::String* l__14790 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15070 = ::x10aux::makeStringLit("ep_dist"); strLit__15070; }));
                                                               ::x10::lang::String* d__14791 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15071 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__15071; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5966)->::x10::util::Option::_constructor(
                                                                 s__14789,
                                                                 l__14790,
                                                                 d__14791,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5966;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5967 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14792 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15072 = ::x10aux::makeStringLit("P_lmD"); strLit__15072; }));
                                                               ::x10::lang::String* l__14793 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15073 = ::x10aux::makeStringLit("lmp_dist"); strLit__15073; }));
                                                               ::x10::lang::String* d__14794 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15074 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__15074; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5967)->::x10::util::Option::_constructor(
                                                                 s__14792,
                                                                 l__14793,
                                                                 d__14794,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5967;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5968 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14795 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15075 = ::x10aux::makeStringLit("mt"); strLit__15075; }));
                                                               ::x10::lang::String* l__14796 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15076 = ::x10aux::makeStringLit("max_time"); strLit__15076; }));
                                                               ::x10::lang::String* d__14797 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15077 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__15077; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5968)->::x10::util::Option::_constructor(
                                                                 s__14795,
                                                                 l__14796,
                                                                 d__14797,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5968;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5969 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14798 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15078 = ::x10aux::makeStringLit("mi"); strLit__15078; }));
                                                               ::x10::lang::String* l__14799 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15079 = ::x10aux::makeStringLit("max_iter"); strLit__15079; }));
                                                               ::x10::lang::String* d__14800 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15080 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__15080; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5969)->::x10::util::Option::_constructor(
                                                                 s__14798,
                                                                 l__14799,
                                                                 d__14800,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5969;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5970 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14801 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15081 = ::x10aux::makeStringLit("mr"); strLit__15081; }));
                                                               ::x10::lang::String* l__14802 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15082 = ::x10aux::makeStringLit("max_restart"); strLit__15082; }));
                                                               ::x10::lang::String* d__14803 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15083 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__15083; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5970)->::x10::util::Option::_constructor(
                                                                 s__14801,
                                                                 l__14802,
                                                                 d__14803,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5970;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5971 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14804 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15084 = ::x10aux::makeStringLit("rp"); strLit__15084; }));
                                                               ::x10::lang::String* l__14805 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15085 = ::x10aux::makeStringLit("rep_partial"); strLit__15085; }));
                                                               ::x10::lang::String* d__14806 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15086 = ::x10aux::makeStringLit("report partial results"); strLit__15086; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5971)->::x10::util::Option::_constructor(
                                                                 s__14804,
                                                                 l__14805,
                                                                 d__14806,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5971;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5972 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14807 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15087 = ::x10aux::makeStringLit("dbg"); strLit__15087; }));
                                                               ::x10::lang::String* l__14808 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15088 = ::x10aux::makeStringLit("debug_terminal"); strLit__15088; }));
                                                               ::x10::lang::String* d__14809 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15089 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__15089; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5972)->::x10::util::Option::_constructor(
                                                                 s__14807,
                                                                 l__14808,
                                                                 d__14809,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5972;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 60 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5973 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14810 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15090 = ::x10aux::makeStringLit("AS_vtr"); strLit__15090; }));
                                                               ::x10::lang::String* l__14811 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15091 = ::x10aux::makeStringLit("AS_varToReset"); strLit__15091; }));
                                                               ::x10::lang::String* d__14812 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15092 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__15092; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5973)->::x10::util::Option::_constructor(
                                                                 s__14810,
                                                                 l__14811,
                                                                 d__14812,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5973;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5974 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14813 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15093 = ::x10aux::makeStringLit("AS_rp"); strLit__15093; }));
                                                               ::x10::lang::String* l__14814 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15094 = ::x10aux::makeStringLit("AS_resetPer"); strLit__15094; }));
                                                               ::x10::lang::String* d__14815 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15095 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__15095; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5974)->::x10::util::Option::_constructor(
                                                                 s__14813,
                                                                 l__14814,
                                                                 d__14815,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5974;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5975 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14816 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15096 = ::x10aux::makeStringLit("AS_flm"); strLit__15096; }));
                                                               ::x10::lang::String* l__14817 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15097 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__15097; }));
                                                               ::x10::lang::String* d__14818 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15098 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__15098; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5975)->::x10::util::Option::_constructor(
                                                                 s__14816,
                                                                 l__14817,
                                                                 d__14818,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5975;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5976 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14819 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15099 = ::x10aux::makeStringLit("AS_fs"); strLit__15099; }));
                                                               ::x10::lang::String* l__14820 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15100 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__15100; }));
                                                               ::x10::lang::String* d__14821 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15101 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__15101; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5976)->::x10::util::Option::_constructor(
                                                                 s__14819,
                                                                 l__14820,
                                                                 d__14821,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5976;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5977 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14822 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15102 = ::x10aux::makeStringLit("AS_rl"); strLit__15102; }));
                                                               ::x10::lang::String* l__14823 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15103 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__15103; }));
                                                               ::x10::lang::String* d__14824 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15104 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__15104; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5977)->::x10::util::Option::_constructor(
                                                                 s__14822,
                                                                 l__14823,
                                                                 d__14824,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5977;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5978 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14825 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15105 = ::x10aux::makeStringLit("AS_plm"); strLit__15105; }));
                                                               ::x10::lang::String* l__14826 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15106 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__15106; }));
                                                               ::x10::lang::String* d__14827 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15107 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__15107; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5978)->::x10::util::Option::_constructor(
                                                                 s__14825,
                                                                 l__14826,
                                                                 d__14827,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5978;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5979 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14828 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15108 = ::x10aux::makeStringLit("AS_e"); strLit__15108; }));
                                                               ::x10::lang::String* l__14829 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15109 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__15109; }));
                                                               ::x10::lang::String* d__14830 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15110 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__15110; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5979)->::x10::util::Option::_constructor(
                                                                 s__14828,
                                                                 l__14829,
                                                                 d__14830,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5979;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5980 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14831 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15111 = ::x10aux::makeStringLit("AS_fb"); strLit__15111; }));
                                                               ::x10::lang::String* l__14832 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15112 = ::x10aux::makeStringLit("AS_firstBest"); strLit__15112; }));
                                                               ::x10::lang::String* d__14833 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15113 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__15113; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5980)->::x10::util::Option::_constructor(
                                                                 s__14831,
                                                                 l__14832,
                                                                 d__14833,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5980;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5981 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14834 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15114 = ::x10aux::makeStringLit("EO_t"); strLit__15114; }));
                                                               ::x10::lang::String* l__14835 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15115 = ::x10aux::makeStringLit("EO_tau"); strLit__15115; }));
                                                               ::x10::lang::String* d__14836 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15116 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__15116; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5981)->::x10::util::Option::_constructor(
                                                                 s__14834,
                                                                 l__14835,
                                                                 d__14836,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5981;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5982 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14837 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15117 = ::x10aux::makeStringLit("EO_p"); strLit__15117; }));
                                                               ::x10::lang::String* l__14838 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15118 = ::x10aux::makeStringLit("EO_pdf"); strLit__15118; }));
                                                               ::x10::lang::String* d__14839 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15119 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__15119; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5982)->::x10::util::Option::_constructor(
                                                                 s__14837,
                                                                 l__14838,
                                                                 d__14839,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5982;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5983 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14840 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15120 = ::x10aux::makeStringLit("EO_ss"); strLit__15120; }));
                                                               ::x10::lang::String* l__14841 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15121 = ::x10aux::makeStringLit("EO_selSec"); strLit__15121; }));
                                                               ::x10::lang::String* d__14842 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15122 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__15122; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5983)->::x10::util::Option::_constructor(
                                                                 s__14840,
                                                                 l__14841,
                                                                 d__14842,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5983;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 73 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5984 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14843 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15123 = ::x10aux::makeStringLit("RoTS_t"); strLit__15123; }));
                                                               ::x10::lang::String* l__14844 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15124 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__15124; }));
                                                               ::x10::lang::String* d__14845 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15125 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__15125; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5984)->::x10::util::Option::_constructor(
                                                                 s__14843,
                                                                 l__14844,
                                                                 d__14845,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5984;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5985 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14846 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15126 = ::x10aux::makeStringLit("RoTS_a"); strLit__15126; }));
                                                               ::x10::lang::String* l__14847 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15127 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__15127; }));
                                                               ::x10::lang::String* d__14848 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15128 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__15128; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5985)->::x10::util::Option::_constructor(
                                                                 s__14846,
                                                                 l__14847,
                                                                 d__14848,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5985;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 76 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5986 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14849 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15129 = ::x10aux::makeStringLit("GA_pz"); strLit__15129; }));
                                                               ::x10::lang::String* l__14850 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15130 = ::x10aux::makeStringLit("GA_population_size"); strLit__15130; }));
                                                               ::x10::lang::String* d__14851 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15131 = ::x10aux::makeStringLit("Set the population size. Default 2*n"); strLit__15131; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5986)->::x10::util::Option::_constructor(
                                                                 s__14849,
                                                                 l__14850,
                                                                 d__14851,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5986;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5987 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14852 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15132 = ::x10aux::makeStringLit("GA_mr"); strLit__15132; }));
                                                               ::x10::lang::String* l__14853 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15133 = ::x10aux::makeStringLit("GA_mutation_rate"); strLit__15133; }));
                                                               ::x10::lang::String* d__14854 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15134 = ::x10aux::makeStringLit("Set the mutation rate. Default 40\\%"); strLit__15134; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5987)->::x10::util::Option::_constructor(
                                                                 s__14852,
                                                                 l__14853,
                                                                 d__14854,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5987;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5988 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14855 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15135 = ::x10aux::makeStringLit("if"); strLit__15135; }));
                                                               ::x10::lang::String* l__14856 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15136 = ::x10aux::makeStringLit("input_vector_file"); strLit__15136; }));
                                                               ::x10::lang::String* d__14857 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15137 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__15137; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5988)->::x10::util::Option::_constructor(
                                                                 s__14855,
                                                                 l__14856,
                                                                 d__14857,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5988;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)52ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 80 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5989 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14858 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15138 = ::x10aux::makeStringLit("bv"); strLit__15138; }));
                                                               ::x10::lang::String* l__14859 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15139 = ::x10aux::makeStringLit("model_baseValue"); strLit__15139; }));
                                                               ::x10::lang::String* d__14860 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15140 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__15140; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5989)->::x10::util::Option::_constructor(
                                                                 s__14858,
                                                                 l__14859,
                                                                 d__14860,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5989;
                                                           }))
                                                           );
                                                         t__14870->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)53ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5990 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14861 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15141 = ::x10aux::makeStringLit("LNP_k"); strLit__15141; }));
                                                               ::x10::lang::String* l__14862 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15142 = ::x10aux::makeStringLit("LNP_k"); strLit__15142; }));
                                                               ::x10::lang::String* d__14863 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15143 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__15143; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5990)->::x10::util::Option::_constructor(
                                                                 s__14861,
                                                                 l__14862,
                                                                 d__14863,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5990;
                                                           }))
                                                           );
                                                         t__14870;
                                                     }))
                                                     );
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::cpls::ParamManager* this__14864 = this;
    ::x10aux::nullCheck(this__14864)->FMGL(SEPARETOR) = ((x10_char)' ');
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__15144 = ::x10aux::makeStringLit("-pf"); strLit__15144; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__15145 = ::x10aux::makeStringLit("CPLS.param"); strLit__15145; })));
    
    //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    try {
        
        //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        this->FMGL(paramFile) = (__extension__ ({
            ::x10::io::File* alloc__5991 =  (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
            (alloc__5991)->::x10::io::File::_constructor(
              this->FMGL(paramFileName));
            alloc__5991;
        }))
        ;
    }
    catch (::x10::lang::CheckedThrowable* __exc0) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc0)) {
            ::x10::io::IOException* id__0 = static_cast< ::x10::io::IOException*>(__exc0);
            {
                
                //#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
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



//#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
void cpls::ParamManager::parseFile() {
    
    //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals(this->FMGL(paramFile), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15146 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__15146; }))));
        
        //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        return;
    }
    
    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__6030;
        for (line__6030 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__6030));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__6030));
            
            //#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(line)->x10::lang::String::length(),
                                         ((x10_int)0)))) {
                continue;
            }
            
            //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals((line)->charAt(((x10_int)0)),
                                         ((x10_char)'#'))))
            {
                continue;
            }
            
            //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            x10_int sepIndex = ::x10aux::nullCheck(line)->x10::lang::String::indexOf(
                                 ((x10_char)' '));
            
            //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            ::x10::lang::String* key = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                         ((x10_int)0), sepIndex);
            
            //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            ::x10::lang::String* value = ::x10aux::nullCheck(line)->x10::lang::String::substring(
                                           ((sepIndex) + (((x10_int)1))));
            
            //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            ::x10::lang::Rail< ::x10::lang::String* >* res =
              this->cpls::ParamManager::myGet(key);
            
            //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(res, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 114 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                continue;
            } else {
                
                //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                ::x10::lang::Any* values = this->howManyValues(
                                             key);
                
                //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                if ((::x10aux::struct_equals((::x10aux::class_cast<x10_int>(values)),
                                             ((x10_int)0))))
                {
                    
                    //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                    ::x10aux::nullCheck(this->FMGL(properties))->put(
                      key, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                            value));
                    
                    //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                    ::x10::util::Option option = ::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                                   key, ::x10::util::Option::FMGL(BAD__get)());
                    
                    //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                    if ((::x10aux::struct_equals(option, ::x10::util::Option::FMGL(BAD__get)())))
                    {
                        break;
                    }
                    
                    //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                    ::x10::lang::String* otherForm = option->x10::util::Option::otherForm(
                                                       key);
                    
                    //#line 126 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                    if (((::x10aux::nullCheck(otherForm)->x10::lang::String::length()) > (((x10_int)0))))
                    {
                        ::x10aux::nullCheck(this->FMGL(properties))->put(
                          otherForm, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                                      value));
                    }
                    
                } else {
                    
                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                    continue;
                }
                
            }
            
        }
    }
    
}

//#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
::x10::lang::Rail< ::x10::lang::String* >* cpls::ParamManager::myGet(
  ::x10::lang::String* key) {
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::lang::String* winner = key;
    
    //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_boolean isValid = true;
    
    //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    if ((::x10aux::struct_equals((key)->charAt(((x10_int)0)),
                                 ((x10_char)'-')))) {
        
        //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       key, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            isValid = false;
        }
        
    } else {
        
        //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15155 = ::x10aux::makeStringLit("-"); strLit__15155; })), key);
        
        //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15158 = ::x10aux::makeStringLit("--"); strLit__15158; })), key);
            
            //#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                           winner, ::x10::util::Option::FMGL(BAD__get)()),
                                         ::x10::util::Option::FMGL(BAD__get)())))
            {
                isValid = false;
            }
            
        }
        
    }
    
    //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    if (isValid) {
        return ::x10aux::nullCheck(this->FMGL(properties))->getOrElse(
                 winner, ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)0ll)));
        
    } else {
        
        //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::String* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        
    }
    
}

//#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
void cpls::ParamManager::printParameters() {
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::lang::String* problem = this->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__15163 = ::x10aux::makeStringLit("-p"); strLit__15163; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__15164 = ::x10aux::makeStringLit("MSP"); strLit__15164; })));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__15165 = ::x10aux::makeStringLit("-f"); strLit__15165; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__15166 = ::x10aux::makeStringLit("."); strLit__15166; })));
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__15167 = ::x10aux::makeStringLit("-s"); strLit__15167; })),
                                                     ((x10_int)10));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__15168 = ::x10aux::makeStringLit("-sm"); strLit__15168; })),
                           ((x10_int)1));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__15169 = ::x10aux::makeStringLit("-mi"); strLit__15169; })),
                             ((x10_int)1000000000));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__15170 = ::x10aux::makeStringLit("-mt"); strLit__15170; })),
                         ((x10_long)0ll));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__15171 = ::x10aux::makeStringLit("-tc"); strLit__15171; })),
                            ((x10_int)0));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__15172 = ::x10aux::makeStringLit("-tf"); strLit__15172; })),
                           ((x10_long)0ll));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__15173 = ::x10aux::makeStringLit("-b"); strLit__15173; })),
                                                       ((x10_int)10));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__15174 = ::x10aux::makeStringLit("-sl"); strLit__15174; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__15175 = ::x10aux::makeStringLit("AS"); strLit__15175; })));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__15176 = ::x10aux::makeStringLit("-N"); strLit__15176; })),
                           ((x10_int)1));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__15177 = ::x10aux::makeStringLit("-U"); strLit__15177; })),
                                                        ((x10_int)0));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__15178 = ::x10aux::makeStringLit("-R"); strLit__15178; })),
                                                        ((x10_int)0));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__15179 = ::x10aux::makeStringLit("-C"); strLit__15179; })),
                           ((x10_int)100));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__15180 = ::x10aux::makeStringLit("-P_e"); strLit__15180; })),
                         ((x10_int)4));
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__15181 = ::x10aux::makeStringLit("-I"); strLit__15181; })),
                         ((x10_long)0ll));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__15182 = ::x10aux::makeStringLit("-D"); strLit__15182; })),
                               0.3);
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__15183 = ::x10aux::makeStringLit("-W"); strLit__15183; })),
                                                        ((x10_long)0ll));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__15184 = ::x10aux::makeStringLit("-A"); strLit__15184; })),
                             0.0);
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__15185 = ::x10aux::makeStringLit("-M"); strLit__15185; })),
                            ((x10_int)1));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__15186 = ::x10aux::makeStringLit("-CD"); strLit__15186; })),
                             ((x10_int)1));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__15187 = ::x10aux::makeStringLit("-if"); strLit__15187; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__15188 = ::x10aux::makeStringLit("."); strLit__15188; })));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__15189 = ::x10aux::makeStringLit("-of"); strLit__15189; })),
                          ((x10_int)1));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15190 = ::x10aux::makeStringLit(""); strLit__15190; }))));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15191 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__15191; }))));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15192 = ::x10aux::makeStringLit("Problem "); strLit__15192; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__15193 = ::x10aux::makeStringLit(" size "); strLit__15193; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__15194 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__15194; }))), filePath)));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15195 = ::x10aux::makeStringLit(""); strLit__15195; }))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15196 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__15196; }))));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15197 = ::x10aux::makeStringLit("Solver: "); strLit__15197; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__15198 = ::x10aux::makeStringLit(", Mode: "); strLit__15198; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__15199 = ::x10aux::makeStringLit("sequential"); strLit__15199; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__15200 = ::x10aux::makeStringLit("parallel"); strLit__15200; })))), (__extension__ ({ static ::x10::lang::String* strLit__15201 = ::x10aux::makeStringLit(", Limit: "); strLit__15201; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__15202 = ::x10aux::makeStringLit(" iterations or "); strLit__15202; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__15203 = ::x10aux::makeStringLit(" ms."); strLit__15203; })))));
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15204 = ::x10aux::makeStringLit("Target cost from "); strLit__15204; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__15205 = ::x10aux::makeStringLit("file. "); strLit__15205; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__15206 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__15206; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__15207 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__15207; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15208 = ::x10aux::makeStringLit(""); strLit__15208; }))));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15209 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__15209; }))));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__15210 = ::x10aux::makeStringLit("Using "); strLit__15210; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__15211 = ::x10aux::makeStringLit("Without "); strLit__15211; }))), (__extension__ ({ static ::x10::lang::String* strLit__15212 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__15212; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__15213 = ::x10aux::makeStringLit(" places. "); strLit__15213; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__15214 = ::x10aux::makeStringLit(" nodes per team "); strLit__15214; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__15215 = ::x10aux::makeStringLit(" Teams"); strLit__15215; })))));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15216 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__15216; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__15217 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__15217; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__15218 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__15218; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__15219 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__15219; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__15220 = ::x10aux::makeStringLit("%"); strLit__15220; })))));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15221 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__15221; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__15222 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__15222; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__15223 = ::x10aux::makeStringLit(" Initial delay "); strLit__15223; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__15224 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__15224; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__15225 = ::x10aux::makeStringLit("%"); strLit__15225; })))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15226 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__15226; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__15227 = ::x10aux::makeStringLit(" Change Vector "); strLit__15227; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__15228 = ::x10aux::makeStringLit(" - "); strLit__15228; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__15229 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__15229; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__15230 = ::x10aux::makeStringLit(" - "); strLit__15230; }))))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15231 = ::x10aux::makeStringLit(""); strLit__15231; }))));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15232 = ::x10aux::makeStringLit("Other Parameters:"); strLit__15232; }))));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15233 = ::x10aux::makeStringLit("Max threads "); strLit__15233; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__15234 = ::x10aux::makeStringLit(" NTHREADS "); strLit__15234; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15235 = ::x10aux::makeStringLit("Solving "); strLit__15235; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__15236 = ::x10aux::makeStringLit(" times each instance"); strLit__15236; })))));
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15237 = ::x10aux::makeStringLit(" Input vector "); strLit__15237; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__15238 = ::x10aux::makeStringLit("."); strLit__15238; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__15239 = ::x10aux::makeStringLit("not used"); strLit__15239; })))
        : (inputPath))));
    
    //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15240 = ::x10aux::makeStringLit(""); strLit__15240; }))));
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
