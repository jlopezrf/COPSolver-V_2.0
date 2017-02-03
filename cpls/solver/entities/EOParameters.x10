package cpls.solver.entities;

public class EOParameters extends HeuristicParameters{
	private var tauUserSel:Double;
	private var pdfUserSel:Int;
	private var selSecond:Int;

 	public def this(){
 
 	}	

 	public def this(tauUserSel:Double, pdfUserSel:Int, selSecond:Int){
		this.tauUserSel = tauUserSel;
		this.pdfUserSel = pdfUserSel;
		this.selSecond = selSecond;
	}
	
	public def getTauUserSel(){
		return this.tauUserSel;
	}
	
	public def getPdfUserSel(){
		return this.pdfUserSel;
	}
	
	public def getSelSecond(){
		return this.selSecond;
	}

 	public def setParameters(parameters:EOParameters){
		 this.tauUserSel = parameters.tauUserSel;
		 this.pdfUserSel = parameters.pdfUserSel;
		 this.selSecond = parameters.selSecond;
 	}
	
}