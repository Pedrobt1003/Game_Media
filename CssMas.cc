@charset "utf-8";
.CssMas {
}
.Ejercicio {
	margin: 0px;
	padding: 0px;
}
.contenedor{
	width: 100%;
	margin: 0px auto; 
	max-width: 1500px;
}

.cabezera{
	padding-top:2px;
    width: 100%;
    height: 150px;
    text-align: center;
	

}
.Menu{
	float-aling: center;
	width: 100%;
	height: 80px;
	
}
.Menu2{
	width: 100%;
	height: 80px;
	text-align: center;
	
	
	
}
.parte1{
	width:10%;
	float : left;
	
}
.parte2{
	width:80%;
	float : left;
	background-color: rgba(255,247,0,1.00); opacity: 0.95;
	
}
.contenedor2{
	width: 100%;
	margin: 0px auto; 
	max-width: 15000px;
	background-color: rgba(255,255,255,1.00); opacity: 0.95;
	height: 900px;
	
}
#boton1{
    width: 25%;
    height: 45px;
    float : left;
    text-align: center;
	 
    
	
	
}
#boton2{
    width: 25%;
    height: 45px;
   
    float : left;
    text-align: center;
	
}
#boton3{
    width: 25%;
    height: 45px;
    float : left;
    text-align: center;
	
}
#boton4{
    width: 25%;
    height: 45px;
    float : left;
    text-align: center;
	
}
.slider{
	width: 100%;
	height: 400px;
	margin: auto;
	overflow: hidden;

	
	
}
.slider ul{
	padding:0;
	display: flex;
	width: 200%;
	animation-direction: alternate;
	animation: cambio 10s infinite;
}
.slider li{
	list-style: none;
	widht:100%;
}
.slider img{

}
@keyframes cambio{
	0%{margin-left:0;}
	20%{margin-left:0;}
	
	25%{margin-left:-100%;}
	45%{margin-left:-100%;}
	
	
	
}
#pie{
	width: 100%;
	height: 50px;
	background-color: rgba(255,255,255,1.00); opacity: 0.5;

}
