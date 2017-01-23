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
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__14838 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)1ll), false);
                                                         t__14838->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           (__extension__ ({
                                                               ::x10::util::Option alloc__5924 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14677 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14947 = ::x10aux::makeStringLit("h"); strLit__14947; }));
                                                               ::x10::lang::String* l__14678 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14948 = ::x10aux::makeStringLit("help"); strLit__14948; }));
                                                               ::x10::lang::String* d__14679 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14949 = ::x10aux::makeStringLit("shows this help message and exit"); strLit__14949; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5924)->::x10::util::Option::_constructor(
                                                                 s__14677,
                                                                 l__14678,
                                                                 d__14679,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5924;
                                                           }))
                                                           );
                                                         t__14838;
                                                     }))
                                                     , (__extension__ ({
                                                         
                                                         //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                         ::x10::lang::Rail< ::x10::util::Option >* t__14842 =
                                                           ::x10::lang::Rail< ::x10::util::Option >::_makeUnsafe(((x10_long)52ll), false);
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)0ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5925 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14680 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14950 = ::x10aux::makeStringLit("p"); strLit__14950; }));
                                                               ::x10::lang::String* l__14681 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14951 = ::x10aux::makeStringLit("problem"); strLit__14951; }));
                                                               ::x10::lang::String* d__14682 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14952 = ::x10aux::makeStringLit("(p)roblem to solve"); strLit__14952; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5925)->::x10::util::Option::_constructor(
                                                                 s__14680,
                                                                 l__14681,
                                                                 d__14682,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5925;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)1ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5926 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14683 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14953 = ::x10aux::makeStringLit("f"); strLit__14953; }));
                                                               ::x10::lang::String* l__14684 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14954 = ::x10aux::makeStringLit("problem_file"); strLit__14954; }));
                                                               ::x10::lang::String* d__14685 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14955 = ::x10aux::makeStringLit("(f)ile path for SMTI or QAP"); strLit__14955; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5926)->::x10::util::Option::_constructor(
                                                                 s__14683,
                                                                 l__14684,
                                                                 d__14685,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5926;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)2ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5927 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14686 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14956 = ::x10aux::makeStringLit("s"); strLit__14956; }));
                                                               ::x10::lang::String* l__14687 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14957 = ::x10aux::makeStringLit("size"); strLit__14957; }));
                                                               ::x10::lang::String* d__14688 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14958 = ::x10aux::makeStringLit("(S)ize of the problem"); strLit__14958; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5927)->::x10::util::Option::_constructor(
                                                                 s__14686,
                                                                 l__14687,
                                                                 d__14688,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5927;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)3ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5928 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14689 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14959 = ::x10aux::makeStringLit("S"); strLit__14959; }));
                                                               ::x10::lang::String* l__14690 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14960 = ::x10aux::makeStringLit("seed"); strLit__14960; }));
                                                               ::x10::lang::String* d__14691 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14961 = ::x10aux::makeStringLit("seed. Default 0"); strLit__14961; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5928)->::x10::util::Option::_constructor(
                                                                 s__14689,
                                                                 l__14690,
                                                                 d__14691,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5928;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)4ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5929 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14692 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14962 = ::x10aux::makeStringLit("sm"); strLit__14962; }));
                                                               ::x10::lang::String* l__14693 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14963 = ::x10aux::makeStringLit("solver_mode"); strLit__14963; }));
                                                               ::x10::lang::String* d__14694 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14964 = ::x10aux::makeStringLit("Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."); strLit__14964; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5929)->::x10::util::Option::_constructor(
                                                                 s__14692,
                                                                 l__14693,
                                                                 d__14694,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5929;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)5ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5930 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14695 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14965 = ::x10aux::makeStringLit("ce"); strLit__14965; }));
                                                               ::x10::lang::String* l__14696 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14966 = ::x10aux::makeStringLit("Control Strategy"); strLit__14966; }));
                                                               ::x10::lang::String* d__14697 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14967 = ::x10aux::makeStringLit("In parallel mode, with master node 1, without 0. Default 1."); strLit__14967; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5930)->::x10::util::Option::_constructor(
                                                                 s__14695,
                                                                 l__14696,
                                                                 d__14697,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5930;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)6ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5931 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14698 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14968 = ::x10aux::makeStringLit("sl"); strLit__14968; }));
                                                               ::x10::lang::String* l__14699 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14969 = ::x10aux::makeStringLit("solver"); strLit__14969; }));
                                                               ::x10::lang::String* d__14700 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14970 = ::x10aux::makeStringLit("Solver to use"); strLit__14970; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5931)->::x10::util::Option::_constructor(
                                                                 s__14698,
                                                                 l__14699,
                                                                 d__14700,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5931;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)7ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5932 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14701 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14971 = ::x10aux::makeStringLit("of"); strLit__14971; }));
                                                               ::x10::lang::String* l__14702 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14972 = ::x10aux::makeStringLit("out_format"); strLit__14972; }));
                                                               ::x10::lang::String* d__14703 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14973 = ::x10aux::makeStringLit("output format: csv 0, info 1"); strLit__14973; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5932)->::x10::util::Option::_constructor(
                                                                 s__14701,
                                                                 l__14702,
                                                                 d__14703,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5932;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)8ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5933 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14704 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14974 = ::x10aux::makeStringLit("tf"); strLit__14974; }));
                                                               ::x10::lang::String* l__14705 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14975 = ::x10aux::makeStringLit("target_from"); strLit__14975; }));
                                                               ::x10::lang::String* d__14706 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14976 = ::x10aux::makeStringLit("Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "); strLit__14976; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5933)->::x10::util::Option::_constructor(
                                                                 s__14704,
                                                                 l__14705,
                                                                 d__14706,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5933;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)9ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5934 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14707 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14977 = ::x10aux::makeStringLit("tc"); strLit__14977; }));
                                                               ::x10::lang::String* l__14708 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14978 = ::x10aux::makeStringLit("target_cost"); strLit__14978; }));
                                                               ::x10::lang::String* d__14709 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14979 = ::x10aux::makeStringLit("target (c)ost from Command Line Parameter. default 0"); strLit__14979; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5934)->::x10::util::Option::_constructor(
                                                                 s__14707,
                                                                 l__14708,
                                                                 d__14709,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5934;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)10ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5935 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14710 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14980 = ::x10aux::makeStringLit("b"); strLit__14980; }));
                                                               ::x10::lang::String* l__14711 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14981 = ::x10aux::makeStringLit("bench"); strLit__14981; }));
                                                               ::x10::lang::String* d__14712 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14982 = ::x10aux::makeStringLit("Number of (b)enchmark tests"); strLit__14982; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5935)->::x10::util::Option::_constructor(
                                                                 s__14710,
                                                                 l__14711,
                                                                 d__14712,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5935;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)11ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5936 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14713 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14983 = ::x10aux::makeStringLit("pf"); strLit__14983; }));
                                                               ::x10::lang::String* l__14714 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14984 = ::x10aux::makeStringLit("param_file"); strLit__14984; }));
                                                               ::x10::lang::String* d__14715 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14985 = ::x10aux::makeStringLit("path of the parameters file"); strLit__14985; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5936)->::x10::util::Option::_constructor(
                                                                 s__14713,
                                                                 l__14714,
                                                                 d__14715,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5936;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)12ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5937 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14716 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14986 = ::x10aux::makeStringLit("v"); strLit__14986; }));
                                                               ::x10::lang::String* l__14717 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14987 = ::x10aux::makeStringLit("verify"); strLit__14987; }));
                                                               ::x10::lang::String* d__14718 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14988 = ::x10aux::makeStringLit("verify and print solution., 0 or 1"); strLit__14988; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5937)->::x10::util::Option::_constructor(
                                                                 s__14716,
                                                                 l__14717,
                                                                 d__14718,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5937;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)13ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5938 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14719 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14989 = ::x10aux::makeStringLit("ca"); strLit__14989; }));
                                                               ::x10::lang::String* l__14720 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14990 = ::x10aux::makeStringLit("comp_AVG"); strLit__14990; }));
                                                               ::x10::lang::String* d__14721 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14991 = ::x10aux::makeStringLit("compute AVG cost for each run at each place"); strLit__14991; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5938)->::x10::util::Option::_constructor(
                                                                 s__14719,
                                                                 l__14720,
                                                                 d__14721,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5938;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)14ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5939 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14722 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14992 = ::x10aux::makeStringLit("N"); strLit__14992; }));
                                                               ::x10::lang::String* l__14723 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14993 = ::x10aux::makeStringLit("nodes_per_team"); strLit__14993; }));
                                                               ::x10::lang::String* d__14724 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14994 = ::x10aux::makeStringLit("nodes_per_team parameter. Default 4."); strLit__14994; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5939)->::x10::util::Option::_constructor(
                                                                 s__14722,
                                                                 l__14723,
                                                                 d__14724,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5939;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)15ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5940 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14725 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14995 = ::x10aux::makeStringLit("U"); strLit__14995; }));
                                                               ::x10::lang::String* l__14726 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14996 = ::x10aux::makeStringLit("update"); strLit__14996; }));
                                                               ::x10::lang::String* d__14727 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14997 = ::x10aux::makeStringLit("Update Interval Intra-team Communication (iterations) . Default 0 - no communication."); strLit__14997; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5940)->::x10::util::Option::_constructor(
                                                                 s__14725,
                                                                 l__14726,
                                                                 d__14727,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5940;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)16ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5941 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14728 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14998 = ::x10aux::makeStringLit("R"); strLit__14998; }));
                                                               ::x10::lang::String* l__14729 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__14999 = ::x10aux::makeStringLit("report"); strLit__14999; }));
                                                               ::x10::lang::String* d__14730 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15000 = ::x10aux::makeStringLit("Report Interval Intra-team Communication (iterations) . Default 0 - no communication."); strLit__15000; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5941)->::x10::util::Option::_constructor(
                                                                 s__14728,
                                                                 l__14729,
                                                                 d__14730,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5941;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)17ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5942 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14731 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15001 = ::x10aux::makeStringLit("C"); strLit__15001; }));
                                                               ::x10::lang::String* l__14732 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15002 = ::x10aux::makeStringLit("p_change_vector"); strLit__15002; }));
                                                               ::x10::lang::String* d__14733 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15003 = ::x10aux::makeStringLit("Probability to change vector in Intra-Team Communication "); strLit__15003; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5942)->::x10::util::Option::_constructor(
                                                                 s__14731,
                                                                 l__14732,
                                                                 d__14733,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5942;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)18ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5943 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14734 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15004 = ::x10aux::makeStringLit("I"); strLit__15004; }));
                                                               ::x10::lang::String* l__14735 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15005 = ::x10aux::makeStringLit("Inter_Team_Interval"); strLit__15005; }));
                                                               ::x10::lang::String* d__14736 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15006 = ::x10aux::makeStringLit("Inter-team Communication Interval (miliseconds) . Default 0 - no communication."); strLit__15006; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5943)->::x10::util::Option::_constructor(
                                                                 s__14734,
                                                                 l__14735,
                                                                 d__14736,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5943;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)19ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5944 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14737 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15007 = ::x10aux::makeStringLit("D"); strLit__15007; }));
                                                               ::x10::lang::String* l__14738 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15008 = ::x10aux::makeStringLit("Inter_Team_Distance"); strLit__15008; }));
                                                               ::x10::lang::String* d__14739 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15009 = ::x10aux::makeStringLit("minimum permisible distance."); strLit__15009; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5944)->::x10::util::Option::_constructor(
                                                                 s__14737,
                                                                 l__14738,
                                                                 d__14739,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5944;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)20ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5945 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14740 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15010 = ::x10aux::makeStringLit("W"); strLit__15010; }));
                                                               ::x10::lang::String* l__14741 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15011 = ::x10aux::makeStringLit("Inter_Team_Wait"); strLit__15011; }));
                                                               ::x10::lang::String* d__14742 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15012 = ::x10aux::makeStringLit("initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"); strLit__15012; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5945)->::x10::util::Option::_constructor(
                                                                 s__14740,
                                                                 l__14741,
                                                                 d__14742,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5945;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)21ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5946 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14743 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15013 = ::x10aux::makeStringLit("A"); strLit__15013; }));
                                                               ::x10::lang::String* l__14744 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15014 = ::x10aux::makeStringLit("Inter_Team_Affected_Explorers"); strLit__15014; }));
                                                               ::x10::lang::String* d__14745 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15015 = ::x10aux::makeStringLit("Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."); strLit__15015; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5946)->::x10::util::Option::_constructor(
                                                                 s__14743,
                                                                 l__14744,
                                                                 d__14745,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5946;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)22ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5947 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14746 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15016 = ::x10aux::makeStringLit("O"); strLit__15016; }));
                                                               ::x10::lang::String* l__14747 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15017 = ::x10aux::makeStringLit("Inter_Team_Option"); strLit__15017; }));
                                                               ::x10::lang::String* d__14748 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15018 = ::x10aux::makeStringLit("Diversification Option. 0 from Scratch 1 Path-Relinking."); strLit__15018; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5947)->::x10::util::Option::_constructor(
                                                                 s__14746,
                                                                 l__14747,
                                                                 d__14748,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5947;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)23ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5948 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14749 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15019 = ::x10aux::makeStringLit("M"); strLit__15019; }));
                                                               ::x10::lang::String* l__14750 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15020 = ::x10aux::makeStringLit("Inter_Team_Params"); strLit__15020; }));
                                                               ::x10::lang::String* d__14751 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15021 = ::x10aux::makeStringLit("Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."); strLit__15021; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5948)->::x10::util::Option::_constructor(
                                                                 s__14749,
                                                                 l__14750,
                                                                 d__14751,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5948;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)24ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5949 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14752 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15022 = ::x10aux::makeStringLit("CD"); strLit__15022; }));
                                                               ::x10::lang::String* l__14753 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15023 = ::x10aux::makeStringLit("Inter_Team_CD"); strLit__15023; }));
                                                               ::x10::lang::String* d__14754 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15024 = ::x10aux::makeStringLit("Change vector on Corrective Action Diversification. 0 disable 1 enable."); strLit__15024; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5949)->::x10::util::Option::_constructor(
                                                                 s__14752,
                                                                 l__14753,
                                                                 d__14754,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5949;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)25ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5950 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14755 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15025 = ::x10aux::makeStringLit("P_e"); strLit__15025; }));
                                                               ::x10::lang::String* l__14756 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15026 = ::x10aux::makeStringLit("poolsize_elite"); strLit__15026; }));
                                                               ::x10::lang::String* d__14757 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15027 = ::x10aux::makeStringLit("Max. number of configurations for the Elite Pool"); strLit__15027; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5950)->::x10::util::Option::_constructor(
                                                                 s__14755,
                                                                 l__14756,
                                                                 d__14757,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5950;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)26ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5951 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14758 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15028 = ::x10aux::makeStringLit("P_lm"); strLit__15028; }));
                                                               ::x10::lang::String* l__14759 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15029 = ::x10aux::makeStringLit("poolsize_locmin"); strLit__15029; }));
                                                               ::x10::lang::String* d__14760 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15030 = ::x10aux::makeStringLit("Max. number of configuration for the local min. Pool"); strLit__15030; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5951)->::x10::util::Option::_constructor(
                                                                 s__14758,
                                                                 l__14759,
                                                                 d__14760,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5951;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)27ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5952 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14761 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15031 = ::x10aux::makeStringLit("P_eM"); strLit__15031; }));
                                                               ::x10::lang::String* l__14762 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15032 = ::x10aux::makeStringLit("ep_mode"); strLit__15032; }));
                                                               ::x10::lang::String* d__14763 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15033 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__15033; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5952)->::x10::util::Option::_constructor(
                                                                 s__14761,
                                                                 l__14762,
                                                                 d__14763,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5952;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)28ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5953 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14764 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15034 = ::x10aux::makeStringLit("P_lmM"); strLit__15034; }));
                                                               ::x10::lang::String* l__14765 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15035 = ::x10aux::makeStringLit("lmp_mode"); strLit__15035; }));
                                                               ::x10::lang::String* d__14766 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15036 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__15036; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5953)->::x10::util::Option::_constructor(
                                                                 s__14764,
                                                                 l__14765,
                                                                 d__14766,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5953;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)29ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5954 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14767 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15037 = ::x10aux::makeStringLit("P_eD"); strLit__15037; }));
                                                               ::x10::lang::String* l__14768 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15038 = ::x10aux::makeStringLit("ep_dist"); strLit__15038; }));
                                                               ::x10::lang::String* d__14769 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15039 = ::x10aux::makeStringLit("elite pool min. distance allowed, 0 normal, 1 smart "); strLit__15039; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5954)->::x10::util::Option::_constructor(
                                                                 s__14767,
                                                                 l__14768,
                                                                 d__14769,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5954;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)30ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5955 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14770 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15040 = ::x10aux::makeStringLit("P_lmD"); strLit__15040; }));
                                                               ::x10::lang::String* l__14771 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15041 = ::x10aux::makeStringLit("lmp_dist"); strLit__15041; }));
                                                               ::x10::lang::String* d__14772 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15042 = ::x10aux::makeStringLit("elite pool mode, 0 normal, 1 smart "); strLit__15042; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5955)->::x10::util::Option::_constructor(
                                                                 s__14770,
                                                                 l__14771,
                                                                 d__14772,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5955;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)31ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5956 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14773 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15043 = ::x10aux::makeStringLit("mt"); strLit__15043; }));
                                                               ::x10::lang::String* l__14774 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15044 = ::x10aux::makeStringLit("max_time"); strLit__15044; }));
                                                               ::x10::lang::String* d__14775 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15045 = ::x10aux::makeStringLit("Max. time  default 0"); strLit__15045; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5956)->::x10::util::Option::_constructor(
                                                                 s__14773,
                                                                 l__14774,
                                                                 d__14775,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5956;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)32ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5957 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14776 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15046 = ::x10aux::makeStringLit("mi"); strLit__15046; }));
                                                               ::x10::lang::String* l__14777 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15047 = ::x10aux::makeStringLit("max_iter"); strLit__15047; }));
                                                               ::x10::lang::String* d__14778 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15048 = ::x10aux::makeStringLit("Max. iterations limit"); strLit__15048; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5957)->::x10::util::Option::_constructor(
                                                                 s__14776,
                                                                 l__14777,
                                                                 d__14778,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5957;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)33ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5958 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14779 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15049 = ::x10aux::makeStringLit("mr"); strLit__15049; }));
                                                               ::x10::lang::String* l__14780 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15050 = ::x10aux::makeStringLit("max_restart"); strLit__15050; }));
                                                               ::x10::lang::String* d__14781 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15051 = ::x10aux::makeStringLit("maximum number of restarts"); strLit__15051; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5958)->::x10::util::Option::_constructor(
                                                                 s__14779,
                                                                 l__14780,
                                                                 d__14781,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5958;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)34ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5959 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14782 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15052 = ::x10aux::makeStringLit("rp"); strLit__15052; }));
                                                               ::x10::lang::String* l__14783 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15053 = ::x10aux::makeStringLit("rep_partial"); strLit__15053; }));
                                                               ::x10::lang::String* d__14784 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15054 = ::x10aux::makeStringLit("report partial results"); strLit__15054; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5959)->::x10::util::Option::_constructor(
                                                                 s__14782,
                                                                 l__14783,
                                                                 d__14784,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5959;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)35ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5960 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14785 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15055 = ::x10aux::makeStringLit("dbg"); strLit__15055; }));
                                                               ::x10::lang::String* l__14786 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15056 = ::x10aux::makeStringLit("debug_terminal"); strLit__15056; }));
                                                               ::x10::lang::String* d__14787 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15057 = ::x10aux::makeStringLit("report debug info on alternative terminal, default none"); strLit__15057; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5960)->::x10::util::Option::_constructor(
                                                                 s__14785,
                                                                 l__14786,
                                                                 d__14787,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5960;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)36ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5961 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14788 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15058 = ::x10aux::makeStringLit("AS_vtr"); strLit__15058; }));
                                                               ::x10::lang::String* l__14789 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15059 = ::x10aux::makeStringLit("AS_varToReset"); strLit__15059; }));
                                                               ::x10::lang::String* d__14790 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15060 = ::x10aux::makeStringLit("number of variables to swap in the reset procedure."); strLit__15060; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5961)->::x10::util::Option::_constructor(
                                                                 s__14788,
                                                                 l__14789,
                                                                 d__14790,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5961;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)37ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5962 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14791 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15061 = ::x10aux::makeStringLit("AS_rp"); strLit__15061; }));
                                                               ::x10::lang::String* l__14792 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15062 = ::x10aux::makeStringLit("AS_resetPer"); strLit__15062; }));
                                                               ::x10::lang::String* d__14793 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15063 = ::x10aux::makeStringLit("Percentage of variables to swap in the reset procedure. Default 10%"); strLit__15063; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5962)->::x10::util::Option::_constructor(
                                                                 s__14791,
                                                                 l__14792,
                                                                 d__14793,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5962;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)38ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5963 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14794 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15064 = ::x10aux::makeStringLit("AS_flm"); strLit__15064; }));
                                                               ::x10::lang::String* l__14795 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15065 = ::x10aux::makeStringLit("AS_freezeLocMin"); strLit__15065; }));
                                                               ::x10::lang::String* d__14796 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15066 = ::x10aux::makeStringLit("number of swaps to freeze local min. variables. Default 5"); strLit__15066; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5963)->::x10::util::Option::_constructor(
                                                                 s__14794,
                                                                 l__14795,
                                                                 d__14796,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5963;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)39ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5964 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14797 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15067 = ::x10aux::makeStringLit("AS_fs"); strLit__15067; }));
                                                               ::x10::lang::String* l__14798 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15068 = ::x10aux::makeStringLit("AS_freezeSwap"); strLit__15068; }));
                                                               ::x10::lang::String* d__14799 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15069 = ::x10aux::makeStringLit("number of swaps to freeze swapped variables. Default 5"); strLit__15069; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5964)->::x10::util::Option::_constructor(
                                                                 s__14797,
                                                                 l__14798,
                                                                 d__14799,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5964;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)40ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5965 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14800 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15070 = ::x10aux::makeStringLit("AS_rl"); strLit__15070; }));
                                                               ::x10::lang::String* l__14801 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15071 = ::x10aux::makeStringLit("AS_resetLimit"); strLit__15071; }));
                                                               ::x10::lang::String* d__14802 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15072 = ::x10aux::makeStringLit("number of marked variables to reset. Default 5"); strLit__15072; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5965)->::x10::util::Option::_constructor(
                                                                 s__14800,
                                                                 l__14801,
                                                                 d__14802,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5965;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)41ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5966 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14803 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15073 = ::x10aux::makeStringLit("AS_plm"); strLit__15073; }));
                                                               ::x10::lang::String* l__14804 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15074 = ::x10aux::makeStringLit("AS_probSelecLocMin"); strLit__15074; }));
                                                               ::x10::lang::String* d__14805 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15075 = ::x10aux::makeStringLit("Probability to select a local min (instead of staying on a plateau). Default 0"); strLit__15075; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5966)->::x10::util::Option::_constructor(
                                                                 s__14803,
                                                                 l__14804,
                                                                 d__14805,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5966;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)42ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5967 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14806 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15076 = ::x10aux::makeStringLit("AS_e"); strLit__15076; }));
                                                               ::x10::lang::String* l__14807 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15077 = ::x10aux::makeStringLit("AS_exhaustive"); strLit__15077; }));
                                                               ::x10::lang::String* d__14808 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15078 = ::x10aux::makeStringLit("Exhaustive mode (explore all combinations), 0 or 1"); strLit__15078; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5967)->::x10::util::Option::_constructor(
                                                                 s__14806,
                                                                 l__14807,
                                                                 d__14808,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5967;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)43ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5968 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14809 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15079 = ::x10aux::makeStringLit("AS_fb"); strLit__15079; }));
                                                               ::x10::lang::String* l__14810 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15080 = ::x10aux::makeStringLit("AS_firstBest"); strLit__15080; }));
                                                               ::x10::lang::String* d__14811 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15081 = ::x10aux::makeStringLit("Select the first best variable in Min conflict heuristic, 0 or 1"); strLit__15081; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5968)->::x10::util::Option::_constructor(
                                                                 s__14809,
                                                                 l__14810,
                                                                 d__14811,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5968;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)44ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5969 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14812 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15082 = ::x10aux::makeStringLit("EO_t"); strLit__15082; }));
                                                               ::x10::lang::String* l__14813 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15083 = ::x10aux::makeStringLit("EO_tau"); strLit__15083; }));
                                                               ::x10::lang::String* d__14814 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15084 = ::x10aux::makeStringLit("Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"); strLit__15084; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5969)->::x10::util::Option::_constructor(
                                                                 s__14812,
                                                                 l__14813,
                                                                 d__14814,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5969;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)45ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5970 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14815 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15085 = ::x10aux::makeStringLit("EO_p"); strLit__15085; }));
                                                               ::x10::lang::String* l__14816 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15086 = ::x10aux::makeStringLit("EO_pdf"); strLit__15086; }));
                                                               ::x10::lang::String* d__14817 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15087 = ::x10aux::makeStringLit("PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"); strLit__15087; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5970)->::x10::util::Option::_constructor(
                                                                 s__14815,
                                                                 l__14816,
                                                                 d__14817,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5970;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)46ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5971 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14818 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15088 = ::x10aux::makeStringLit("EO_ss"); strLit__15088; }));
                                                               ::x10::lang::String* l__14819 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15089 = ::x10aux::makeStringLit("EO_selSec"); strLit__15089; }));
                                                               ::x10::lang::String* d__14820 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15090 = ::x10aux::makeStringLit("Function used to select the second variable . Default 1-(minconflict) 0-(random)"); strLit__15090; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5971)->::x10::util::Option::_constructor(
                                                                 s__14818,
                                                                 l__14819,
                                                                 d__14820,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5971;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)47ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5972 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14821 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15091 = ::x10aux::makeStringLit("RoTS_t"); strLit__15091; }));
                                                               ::x10::lang::String* l__14822 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15092 = ::x10aux::makeStringLit("RoTS_tabu_duration"); strLit__15092; }));
                                                               ::x10::lang::String* d__14823 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15093 = ::x10aux::makeStringLit("Set tabu duration factor (x N). Default 8"); strLit__15093; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5972)->::x10::util::Option::_constructor(
                                                                 s__14821,
                                                                 l__14822,
                                                                 d__14823,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5972;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)48ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5973 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14824 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15094 = ::x10aux::makeStringLit("RoTS_a"); strLit__15094; }));
                                                               ::x10::lang::String* l__14825 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15095 = ::x10aux::makeStringLit("RoTS_aspiration"); strLit__15095; }));
                                                               ::x10::lang::String* d__14826 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15096 = ::x10aux::makeStringLit("Set aspiration factor (x NxN). Default 5"); strLit__15096; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5973)->::x10::util::Option::_constructor(
                                                                 s__14824,
                                                                 l__14825,
                                                                 d__14826,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5973;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)49ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5974 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14827 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15097 = ::x10aux::makeStringLit("if"); strLit__15097; }));
                                                               ::x10::lang::String* l__14828 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15098 = ::x10aux::makeStringLit("input_vector_file"); strLit__15098; }));
                                                               ::x10::lang::String* d__14829 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15099 = ::x10aux::makeStringLit("file path for input vector . Default ."); strLit__15099; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5974)->::x10::util::Option::_constructor(
                                                                 s__14827,
                                                                 l__14828,
                                                                 d__14829,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5974;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)50ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5975 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14830 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15100 = ::x10aux::makeStringLit("bv"); strLit__15100; }));
                                                               ::x10::lang::String* l__14831 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15101 = ::x10aux::makeStringLit("model_baseValue"); strLit__15101; }));
                                                               ::x10::lang::String* d__14832 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15102 = ::x10aux::makeStringLit("Domain base value for the model . 0 or 1"); strLit__15102; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5975)->::x10::util::Option::_constructor(
                                                                 s__14830,
                                                                 l__14831,
                                                                 d__14832,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5975;
                                                           }))
                                                           );
                                                         t__14842->x10::lang::Rail< ::x10::util::Option >::__set(
                                                           ((x10_long)51ll),
                                                           (__extension__ ({
                                                               
                                                               //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
                                                               ::x10::util::Option alloc__5976 =
                                                                 
                                                               ::x10::util::Option::_alloc();
                                                               
                                                               //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               ::x10::lang::String* s__14833 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15103 = ::x10aux::makeStringLit("LNP_k"); strLit__15103; }));
                                                               ::x10::lang::String* l__14834 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15104 = ::x10aux::makeStringLit("LNP_k"); strLit__15104; }));
                                                               ::x10::lang::String* d__14835 =
                                                                 (__extension__ ({ static ::x10::lang::String* strLit__15105 = ::x10aux::makeStringLit("Parameter K in Langford number problem . 2 or 3"); strLit__15105; }));
                                                               
                                                               //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Option.x10"
                                                               (alloc__5976)->::x10::util::Option::_constructor(
                                                                 s__14833,
                                                                 l__14834,
                                                                 d__14835,
                                                                 ((x10_int)0),
                                                                 false,
                                                                 false,
                                                                 false);
                                                               alloc__5976;
                                                           }))
                                                           );
                                                         t__14842;
                                                     }))
                                                     );
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::cpls::ParamManager* this__14836 = this;
    ::x10aux::nullCheck(this__14836)->FMGL(SEPARETOR) = ((x10_char)' ');
    
    //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    this->FMGL(paramFileName) = this->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__15106 = ::x10aux::makeStringLit("-pf"); strLit__15106; })),
                                  (__extension__ ({ static ::x10::lang::String* strLit__15107 = ::x10aux::makeStringLit("CPLS.param"); strLit__15107; })));
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    try {
        
        //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        this->FMGL(paramFile) = (__extension__ ({
            ::x10::io::File* alloc__5977 =  (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
            (alloc__5977)->::x10::io::File::_constructor(
              this->FMGL(paramFileName));
            alloc__5977;
        }))
        ;
    }
    catch (::x10::lang::CheckedThrowable* __exc0) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc0)) {
            ::x10::io::IOException* id__0 = static_cast< ::x10::io::IOException*>(__exc0);
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
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15108 = ::x10aux::makeStringLit("No parameters file supplied"); strLit__15108; }))));
        
        //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        return;
    }
    
    //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::String*>* line__6016;
        for (line__6016 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(paramFile))->lines())->iterator();
             ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__6016));
             ) {
            ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__6016));
            
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
                                 ((x10_char)' '));
            
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
                    ::x10::lang::String* otherForm = option->x10::util::Option::otherForm(
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
        winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15117 = ::x10aux::makeStringLit("-"); strLit__15117; })), key);
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(keyMap))->getOrElse(
                                       winner, ::x10::util::Option::FMGL(BAD__get)()),
                                     ::x10::util::Option::FMGL(BAD__get)())))
        {
            
            //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
            winner = ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15120 = ::x10aux::makeStringLit("--"); strLit__15120; })), key);
            
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
                                     (__extension__ ({ static ::x10::lang::String* strLit__15125 = ::x10aux::makeStringLit("-p"); strLit__15125; })),
                                     (__extension__ ({ static ::x10::lang::String* strLit__15126 = ::x10aux::makeStringLit("MSP"); strLit__15126; })));
    
    //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::lang::String* filePath = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__15127 = ::x10aux::makeStringLit("-f"); strLit__15127; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__15128 = ::x10aux::makeStringLit("."); strLit__15128; })));
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int size = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__15129 = ::x10aux::makeStringLit("-s"); strLit__15129; })),
                                                     ((x10_int)10));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int solverMode = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__15130 = ::x10aux::makeStringLit("-sm"); strLit__15130; })),
                           ((x10_int)1));
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int restartLimit = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__15131 = ::x10aux::makeStringLit("-mi"); strLit__15131; })),
                             ((x10_int)1000000000));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_long maxTime = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__15132 = ::x10aux::makeStringLit("-mt"); strLit__15132; })),
                         ((x10_long)0ll));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int tCostFromCL = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__15133 = ::x10aux::makeStringLit("-tc"); strLit__15133; })),
                            ((x10_int)0));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_long costFromF = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__15134 = ::x10aux::makeStringLit("-tf"); strLit__15134; })),
                           ((x10_long)0ll));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int testNb = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__15135 = ::x10aux::makeStringLit("-b"); strLit__15135; })),
                                                       ((x10_int)10));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::lang::String* solverIn = this->cpls::ParamManager::__apply(
                                      (__extension__ ({ static ::x10::lang::String* strLit__15136 = ::x10aux::makeStringLit("-sl"); strLit__15136; })),
                                      (__extension__ ({ static ::x10::lang::String* strLit__15137 = ::x10aux::makeStringLit("AS"); strLit__15137; })));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int nodesPTeam = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__15138 = ::x10aux::makeStringLit("-N"); strLit__15138; })),
                           ((x10_int)1));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int updateI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__15139 = ::x10aux::makeStringLit("-U"); strLit__15139; })),
                                                        ((x10_int)0));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int reportI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__15140 = ::x10aux::makeStringLit("-R"); strLit__15140; })),
                                                        ((x10_int)0));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int changeProb = this->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__15141 = ::x10aux::makeStringLit("-C"); strLit__15141; })),
                           ((x10_int)100));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int poolSize = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__15142 = ::x10aux::makeStringLit("-P_e"); strLit__15142; })),
                         ((x10_int)4));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_long interTI = this->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__15143 = ::x10aux::makeStringLit("-I"); strLit__15143; })),
                         ((x10_long)0ll));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_double minDistance = this->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__15144 = ::x10aux::makeStringLit("-D"); strLit__15144; })),
                               0.3);
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_long delayI = this->cpls::ParamManager::__apply((__extension__ ({ static ::x10::lang::String* strLit__15145 = ::x10aux::makeStringLit("-W"); strLit__15145; })),
                                                        ((x10_long)0ll));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_double affectedP = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__15146 = ::x10aux::makeStringLit("-A"); strLit__15146; })),
                             0.0);
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int changeParam = this->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__15147 = ::x10aux::makeStringLit("-M"); strLit__15147; })),
                            ((x10_int)1));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int changeVector = this->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__15148 = ::x10aux::makeStringLit("-CD"); strLit__15148; })),
                             ((x10_int)1));
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::lang::String* inputPath = this->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__15149 = ::x10aux::makeStringLit("-if"); strLit__15149; })),
                                       (__extension__ ({ static ::x10::lang::String* strLit__15150 = ::x10aux::makeStringLit("."); strLit__15150; })));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    x10_int outFormat = this->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__15151 = ::x10aux::makeStringLit("-of"); strLit__15151; })),
                          ((x10_int)1));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15152 = ::x10aux::makeStringLit(""); strLit__15152; }))));
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15153 = ::x10aux::makeStringLit("Problem Parameters:"); strLit__15153; }))));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15154 = ::x10aux::makeStringLit("Problem "); strLit__15154; })), problem), (__extension__ ({ static ::x10::lang::String* strLit__15155 = ::x10aux::makeStringLit(" size "); strLit__15155; }))), size), (__extension__ ({ static ::x10::lang::String* strLit__15156 = ::x10aux::makeStringLit(" File Path (SMTI):"); strLit__15156; }))), filePath)));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15157 = ::x10aux::makeStringLit(""); strLit__15157; }))));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15158 = ::x10aux::makeStringLit("Solver Parameters:"); strLit__15158; }))));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15159 = ::x10aux::makeStringLit("Solver: "); strLit__15159; })), solverIn), (__extension__ ({ static ::x10::lang::String* strLit__15160 = ::x10aux::makeStringLit(", Mode: "); strLit__15160; }))), (::x10aux::struct_equals(solverMode,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_int)0)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__15161 = ::x10aux::makeStringLit("sequential"); strLit__15161; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__15162 = ::x10aux::makeStringLit("parallel"); strLit__15162; })))), (__extension__ ({ static ::x10::lang::String* strLit__15163 = ::x10aux::makeStringLit(", Limit: "); strLit__15163; }))), restartLimit), (__extension__ ({ static ::x10::lang::String* strLit__15164 = ::x10aux::makeStringLit(" iterations or "); strLit__15164; }))), maxTime), (__extension__ ({ static ::x10::lang::String* strLit__15165 = ::x10aux::makeStringLit(" ms."); strLit__15165; })))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15166 = ::x10aux::makeStringLit("Target cost from "); strLit__15166; })), (!::x10aux::struct_equals(costFromF,
                                                                                                                                                                                                                                 ((x10_long)0ll)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__15167 = ::x10aux::makeStringLit("file. "); strLit__15167; })))
        : (::x10::lang::String::__plus(((tCostFromCL) >= (((x10_int)0)))
             ? ((__extension__ ({ static ::x10::lang::String* strLit__15168 = ::x10aux::makeStringLit("command line, lower or equal than "); strLit__15168; })))
             : ((__extension__ ({ static ::x10::lang::String* strLit__15169 = ::x10aux::makeStringLit("command line, strictly lower than "); strLit__15169; }))), ((x10_int)::labs(tCostFromCL)))))));
    
    //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15170 = ::x10aux::makeStringLit(""); strLit__15170; }))));
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15171 = ::x10aux::makeStringLit("Parallel framework Parameters:"); strLit__15171; }))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((nodesPTeam) > (((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__15172 = ::x10aux::makeStringLit("Using "); strLit__15172; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__15173 = ::x10aux::makeStringLit("Without "); strLit__15173; }))), (__extension__ ({ static ::x10::lang::String* strLit__15174 = ::x10aux::makeStringLit("Cooperative Search: "); strLit__15174; }))), ((x10_long)::x10aux::num_hosts)), (__extension__ ({ static ::x10::lang::String* strLit__15175 = ::x10aux::makeStringLit(" places. "); strLit__15175; }))), nodesPTeam), (__extension__ ({ static ::x10::lang::String* strLit__15176 = ::x10aux::makeStringLit(" nodes per team "); strLit__15176; }))), ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPTeam))), (__extension__ ({ static ::x10::lang::String* strLit__15177 = ::x10aux::makeStringLit(" Teams"); strLit__15177; })))));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15178 = ::x10aux::makeStringLit("Intensification Parameters: Update Interval "); strLit__15178; })), updateI), (__extension__ ({ static ::x10::lang::String* strLit__15179 = ::x10aux::makeStringLit(" iter. Report Interval "); strLit__15179; }))), reportI), (__extension__ ({ static ::x10::lang::String* strLit__15180 = ::x10aux::makeStringLit(" iter. Pool size "); strLit__15180; }))), poolSize), (__extension__ ({ static ::x10::lang::String* strLit__15181 = ::x10aux::makeStringLit(" conf. Probability to Change vector "); strLit__15181; }))), changeProb), (__extension__ ({ static ::x10::lang::String* strLit__15182 = ::x10aux::makeStringLit("%"); strLit__15182; })))));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15183 = ::x10aux::makeStringLit("Diversification Parameters: Interval "); strLit__15183; })), interTI), (__extension__ ({ static ::x10::lang::String* strLit__15184 = ::x10aux::makeStringLit(" ms. Minimum distance: "); strLit__15184; }))), minDistance), (__extension__ ({ static ::x10::lang::String* strLit__15185 = ::x10aux::makeStringLit(" Initial delay "); strLit__15185; }))), delayI), (__extension__ ({ static ::x10::lang::String* strLit__15186 = ::x10aux::makeStringLit(" ms. Per. Affected Places "); strLit__15186; }))), ((affectedP) * (((x10_double) (((x10_long)100ll)))))), (__extension__ ({ static ::x10::lang::String* strLit__15187 = ::x10aux::makeStringLit("%"); strLit__15187; })))));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15188 = ::x10aux::makeStringLit("                            Corrective Action:"); strLit__15188; })), (::x10aux::struct_equals(changeVector,
                                                                                                                                                                                                                                                                                         ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__15189 = ::x10aux::makeStringLit(" Change Vector "); strLit__15189; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__15190 = ::x10aux::makeStringLit(" - "); strLit__15190; })))), (::x10aux::struct_equals(changeParam,
                                                                                                                                                        ((x10_int)1)))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__15191 = ::x10aux::makeStringLit("and Adapt Solver Parameters "); strLit__15191; })))
        : ((__extension__ ({ static ::x10::lang::String* strLit__15192 = ::x10aux::makeStringLit(" - "); strLit__15192; }))))));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15193 = ::x10aux::makeStringLit(""); strLit__15193; }))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15194 = ::x10aux::makeStringLit("Other Parameters:"); strLit__15194; }))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15195 = ::x10aux::makeStringLit("Max threads "); strLit__15195; })), ::x10::lang::Runtime::FMGL(MAX_THREADS__get)()), (__extension__ ({ static ::x10::lang::String* strLit__15196 = ::x10aux::makeStringLit(" NTHREADS "); strLit__15196; }))), ::x10::lang::Runtime::FMGL(NTHREADS__get)())));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15197 = ::x10aux::makeStringLit("Solving "); strLit__15197; })), testNb), (__extension__ ({ static ::x10::lang::String* strLit__15198 = ::x10aux::makeStringLit(" times each instance"); strLit__15198; })))));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15199 = ::x10aux::makeStringLit(" Input vector "); strLit__15199; })), ::x10aux::equals(inputPath,(__extension__ ({ static ::x10::lang::String* strLit__15200 = ::x10aux::makeStringLit("."); strLit__15200; })))
        ? ((__extension__ ({ static ::x10::lang::String* strLit__15201 = ::x10aux::makeStringLit("not used"); strLit__15201; })))
        : (inputPath))));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ParamManager.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__15202 = ::x10aux::makeStringLit(""); strLit__15202; }))));
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
