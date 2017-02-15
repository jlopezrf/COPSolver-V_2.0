package cpls.util;
import x10.io.FileReader;
import x10.io.File;
import x10.util.StringBuilder;
import x10.util.RailUtils;

public class CPLSFileReader {

	public static def tryReadParameters (filePath : String, params:Rail[Long]):Rail[Long]{	 
	 	val filep = new File(filePath);
	 	val fr = filep.openRead();
	 	var fLine : String;
	 	do{
	 		fLine = fr.readLine(); //get line
	 	}while( fLine( 0n ) == '#'); //ignore first lines that starts with number symbol character
	 	val header = readParameters(fLine);
	 	//Assign reading parameter to output array
	 	for ( var i : Long = 0; i < params.size; i++ ){
	 		params(i) = header(i);
	 	}
	 	fr.close();
	 	return params;
	}

	public static def readParameters( line : String ) : Rail[Int]{
	 	var i : Int;
	 	var j : Int = 0n;
	 	var buffer : String = "";
	 	val x = new Rail[Int]( 2, -1n );
	 	for(i = 0n ; i < line.length() ; i++){
	 		if( line(i) == ' ' || line(i) == '\n' ){
	 			x(j++) = Int.parse(buffer);
	 			buffer = "";
	 		}else{
	 			buffer += line(i);
	 		}
	 	}
	 	x(j) = Int.parse(buffer);
	 	return x;
	}

	public static def loadDir(path : String) : Rail[String]{
 		var nPath:StringBuilder = new StringBuilder();
		val fp = new File(path);
		val execList : Rail[String];
		if (fp.isDirectory()){
			Logger.debug(()=>{"solving all problems into this directory"});
			execList = fp.list(); 
			nPath.addString(path);
		}else{
			//Logger.debug(()=>{"Solving "+testNo+" times the problem "+path});
			execList = [fp.getName()];
			nPath.addString(fp.getParentFile().getPath());
			Console.OUT.println(nPath+" "+fp.getName());
		}
		RailUtils.sort(execList);
		return execList;
	}

}