/* 
 * PHYSH - Parallel HYbridization for Simple Heuristics
 * 
 * MIT License
 *
 * Copyright (c) 2022 Jheisson Argiro López Restrepo
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

package cpls.entities;

import cpls.HeuristicFactory;
import cpls.CPLSOptionsEnum;

public class NodeConfig{
 	
 	private var heuristic:Int;
 	private var numberOfTeams:Int;
 	private var nodesPerTeam:Int;
 	private var teamId:Int;
 	private var rol:Int;
 	private var interTeamCommTime:Long;
 	private var affectedPer:Double;
 	private var iniDelay:Long;
 	private var verify:Boolean;
 	private var changeProb:Int;
 	private var diversificationOption:Int;
 	private var maxTime:Long;
 	private var maxIters:Long;
 	private var maxRestarts:Int;
 	private var reportPart:Boolean;
 	private var modParams:Int;
 	private var changeOnDiver:Int;
 	private var reportI:Int;
 	private var updateI:Int;
 	private var maxUpdateI:Int;
 	private var adaptiveComm:Boolean;
 	//Jason: Migration
 	private var dCKI:Int;
 	private var modeIndicator:Int;
 
 	public def this(){}
 	public def this(heuristic:Int, rol:Int){this.heuristic = heuristic;	this.rol = rol;}
 	
 	public def setHeuristic(heuristic:Int){this.heuristic = heuristic;}	
 	public def setNumberOfTeams(numberOfTeams:Int){this.numberOfTeams = numberOfTeams;}
 	public def setNodesPerTeam(nodesPerTeam:Int){this.nodesPerTeam = nodesPerTeam;}
 	public def setTeamId(teamId:Int){this.teamId = teamId;}
 	public def setRol(rol:Int){this.rol = rol;}
 	public def setInterTeamCommTime(interTeamCommTime:Long){this.interTeamCommTime = interTeamCommTime;}
 	public def setAffectedPer(affectedPer:Double){this.affectedPer = affectedPer;}
 	public def setIniDelay(iniDelay:Long){this.iniDelay = iniDelay;}
 	public def setVerify(verify:Boolean){this.verify = verify;}
 	public def setChangeProb(changeProb:Int){this.changeProb = changeProb;}
 	public def setDiversificationOption(divOption:Int){this.diversificationOption = diversificationOption;}
 	public def setMaxTime(maxTime:Long){this.maxTime = maxTime;}
 	public def setMaxIters(maxIters:Long){this.maxIters = maxIters;}
 	public def setMaxRestarts(maxRestarts:Int){this.maxRestarts = maxRestarts;}
 	public def setReportPart(reportPart:Boolean){this.reportPart = reportPart;}
 	public def setModParams(modParams:Int){this.modParams = modParams;}
 	public def setChangeOnDiver(changeOnDiver:Int){this.changeOnDiver = changeOnDiver;}
 	public def setReportI(reportI:Int){this.reportI = reportI;}
 	public def setUpdateI(updateI:Int){this.updateI = updateI;}
 	public def setMaxUpdateI(maxUpdateI:Int){this.maxUpdateI = maxUpdateI;}
 	public def setAdaptiveComm(adaptiveComm:Boolean){this.adaptiveComm = adaptiveComm;}
 	//Jason: Migration
 	public def setDCKI(dCKI:Int){this.dCKI = dCKI;}
 	public def setModeIndicator(modeIndicator:Int){this.modeIndicator = modeIndicator;}
 
 	public def getHeuristic(){return this.heuristic;}
 	public def getNumberOfTeams(){return this.numberOfTeams;}
 	public def getNodesPerTeam(){return this.nodesPerTeam;}
 	public def getTeamId(){return this.teamId;}
 	public def getRol(){return this.rol as Int;}
 	public def getInterTeamCommTime(){return this.interTeamCommTime;}
 	public def getAffectedPer(){return this.affectedPer;}
 	public def getIniDelay(){return this.iniDelay;}
 	public def getVerify(){return this.verify;}
 	public def getChangeProb(){return this.changeProb;}
 	public def getDiversificationOption(){return this.diversificationOption;}
 	public def getMaxTime(){return this.maxTime;}
 	public def getMaxIters(){return this.maxIters;}
 	public def getMaxRestarts(){return this.maxRestarts;}
 	public def getReportPart(){return this.reportPart;}
 	public def getModParams(){return this.modParams;}
 	public def getChangeOnDiver(){return this.changeOnDiver;}
 	public def getReportI(){return this.reportI;}
 	public def getUpdateI(){return this.updateI;}
 	public def getMaxUpdateI(){return this.maxUpdateI;}
 	public def getAdaptiveComm(){return this.adaptiveComm;}
 	//Jason: Migration
 	public def getDCKI(){return this.dCKI;}
 	public def getModeIndicator(){return this.modeIndicator;}
}
