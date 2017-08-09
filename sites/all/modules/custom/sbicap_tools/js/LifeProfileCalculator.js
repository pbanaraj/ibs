var CL_fact = 25;
        function LifeFloat(id) {
            
            document.getElementById("td_Lifeprofile1").style.display = "block";
            document.getElementById("td_Lifeprofile").style.display = "none";
            if (id == "1") {
                document.getElementById("tr_FirstLP").style.display = "none";
                document.getElementById("tr_SecondLP").style.display = "block";
                document.getElementById("tr_ThirdLP").style.display = "none";
                document.getElementById("tr_buttonlp").style.display = "none";
                document.getElementById("Recalculate").style.display = "none";
                document.getElementById("Calculate").style.display = "none";
            }
            else if (id == "2") {
                document.getElementById("tr_FirstLP").style.display = "block";
                document.getElementById("tr_SecondLP").style.display = "none";
                document.getElementById("tr_ThirdLP").style.display = "none";
                document.getElementById("tr_buttonlp").style.display = "none";
                document.getElementById("Recalculate").style.display = "none";
                document.getElementById("Calculate").style.display = "none";
            }
            else if (id == "3") {
                document.getElementById("tr_FirstLP").style.display = "none";
                document.getElementById("tr_SecondLP").style.display = "none";
                document.getElementById("tr_ThirdLP").style.display = "block";
                document.getElementById("tr_buttonlp").style.display = "block";
                document.getElementById("Recalculate").style.display = "none";
                document.getElementById("Calculate").style.display = "block";
            }
            else if (id == "4") {
                document.getElementById("tr_FirstLP").style.display = "none";
                document.getElementById("tr_SecondLP").style.display = "block";
                document.getElementById("tr_ThirdLP").style.display = "none";
                document.getElementById("tr_buttonlp").style.display = "none";
                document.getElementById("Recalculate").style.display = "none";
                document.getElementById("Calculate").style.display = "block";
            }
        }
        function Lifeclear() {
            document.getElementById("td_Lifeprofile1").style.display = "block";
            document.getElementById("td_Lifeprofile").style.display = "none";
            document.getElementById("tr_FirstLP").style.display = "block";
            document.getElementById("tr_SecondLP").style.display = "none";
            document.getElementById("tr_ThirdLP").style.display = "none";
            document.getElementById("tr_buttonlp").style.display = "none";

            if (document.getElementById("age1").value = 25) {
                document.getElementById('age1').checked = true;
            }
            if (document.getElementById("Mar1").value = 25) {
                document.getElementById('Mar1').checked = true;
            }
            if (document.getElementById("employ1").value = 25) {
                document.getElementById('employ1').checked = true;
            }
            if (document.getElementById("Salary1").value = 25) {
                document.getElementById('Salary1').checked = true;
            }
            if (document.getElementById("check1").value = 25) {
                document.getElementById('check1').checked = true;
            }
        }
        function LifeCalculate() {
            document.getElementById("Recalculate").style.display = "block";
            document.getElementById("Calculate").style.display = "none";
            if (document.getElementById('age1').checked) { agepoints = 25; }
            if (document.getElementById('age2').checked) { agepoints = 50; }
            if (document.getElementById('age3').checked) { agepoints = 75; }
            if (document.getElementById('age4').checked) { agepoints = 100; }

            if (document.getElementById('Mar1').checked) { Marpoints = 25; }
            if (document.getElementById('Mar2').checked) { Marpoints = 50; }
            if (document.getElementById('Mar3').checked) { Marpoints = 75; }
            if (document.getElementById('Mar4').checked) { Marpoints = 100; }

            if (document.getElementById('employ1').checked) { employpoints = 25; }
            if (document.getElementById('employ2').checked) { employpoints = 50; }
            if (document.getElementById('employ3').checked) { employpoints = 75; }
            if (document.getElementById('employ4').checked) { employpoints = 100; }

            if (document.getElementById('Salary1').checked) { Salarypoints = 25; }
            if (document.getElementById('Salary2').checked) { Salarypoints = 50; }
            if (document.getElementById('Salary3').checked) { Salarypoints = 75; }
            if (document.getElementById('Salary4').checked) { Salarypoints = 100; }

            if (document.getElementById('check1').checked) { checkpoints = 25; }
            if (document.getElementById('check2').checked) { checkpoints = 50; }
            if (document.getElementById('check3').checked) { checkpoints = 75; }
            if (document.getElementById('check4').checked) { checkpoints = 100; }

            var Q11 = document.getElementById("age1").value;
            var Q12 = document.getElementById("age2").value;
            var Q13 = document.getElementById("age3").value;
            var Q14 = document.getElementById("age4").value;

            var Q21 = document.getElementById("Mar1").value;
            var Q22 = document.getElementById("Mar2").value;
            var Q23 = document.getElementById("Mar3").value;
            var Q24 = document.getElementById("Mar4").value;

            var Q31 = document.getElementById("employ1").value;
            var Q32 = document.getElementById("employ2").value;
            var Q33 = document.getElementById("employ3").value;
            var Q34 = document.getElementById("employ4").value;


            var Q41 = document.getElementById("Salary1").value;
            var Q42 = document.getElementById("Salary2").value;
            var Q43 = document.getElementById("Salary3").value;
            var Q44 = document.getElementById("Salary4").value;

            var Q51 = document.getElementById("check1").value;
            var Q52 = document.getElementById("check2").value;
            var Q53 = document.getElementById("check3").value;
            var Q54 = document.getElementById("check4").value;

            document.getElementById("td_Lifeprofile1").style.display = "block";
            document.getElementById("td_Lifeprofile").style.display = "none";

            /*1. 25 - 30,Single/To be Married Soon/Divorced,Unemployed,Below 5 Lakhs,None*/
            if (agepoints == "25" && (Marpoints == "25" || Marpoints == "50" || Marpoints == "100") && employpoints == "25" && Salarypoints == "25" && checkpoints == "25") {
                // alert("1");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);   
                //alert(Q14+"/"+Q21+"/"+Q31+"/"+Q41+"/"+Q51);
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a single person who is not earning at the moment. We assume that you are meeting your daily expenses with the support from your parents or relatives.";
            }
            
            
            //Start new changes for Unemployed
            else if (agepoints == "25" && (Marpoints == "25" || Marpoints == "50" || Marpoints == "100") && employpoints == "25" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "25" || checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                // alert("1");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);   
                //alert(Q14+"/"+Q21+"/"+Q31+"/"+Q41+"/"+Q51);
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a single person who is not earning at the moment. We assume that you are meeting your daily expenses with the support from your parents or relatives.";
            }
            else if (agepoints == "50" && (Marpoints == "25" || Marpoints == "50" || Marpoints == "100") && employpoints == "25" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "25" || checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                // alert("1");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);   
                //alert(Q14+"/"+Q21+"/"+Q31+"/"+Q41+"/"+Q51);
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a single person who is not earning at the moment. We assume that you are meeting your daily expenses with the support from your parents or relatives.";
            }
            else if (agepoints == "75" && (Marpoints == "25" || Marpoints == "50" || Marpoints == "100") && employpoints == "25" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "25" || checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                // alert("1");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);   
                //alert(Q14+"/"+Q21+"/"+Q31+"/"+Q41+"/"+Q51);
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a single person who is not earning at the moment. We assume that you are meeting your daily expenses with the support from your parents or relatives.";
            }
            else if (agepoints == "100" && (Marpoints == "25" || Marpoints == "50" || Marpoints == "100") && employpoints == "25" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "25" || checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                // alert("1");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);   
                //alert(Q14+"/"+Q21+"/"+Q31+"/"+Q41+"/"+Q51);
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a single person who is not earning at the moment. We assume that you are meeting your daily expenses with the support from your parents or relatives.";
            }
            
            
            
            //End new changes for Unemployed
            
            
            /*2. 31 - 40,Single/To be Married Soon/Divorced,Unemployed,Below 5 Lakhs,None*/
            else if (agepoints == "50" && (Marpoints == "25" || Marpoints == "50" || Marpoints == "100") && employpoints == "25" && Salarypoints == "25" && checkpoints == "25") {
                //alert("2");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);           
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a single person who is not earning at the moment. We assume that you are meeting your daily expenses with the support from your parents or relatives.";
            }
            /*3. 41 - 50,Single/To be Married Soon/Divorced,Unemployed,Below 5 Lakhs,None*/
            else if (agepoints == "75" && (Marpoints == "25" || Marpoints == "50" || Marpoints == "100") && employpoints == "25" && Salarypoints == "25" && checkpoints == "25") {
                // alert("3");
                //alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);   
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a single person who is not earning at the moment. We assume that you are meeting your daily expenses with the support from your parents or relatives.";
            }
            /*4. More than 50,Single/To be Married Soon/Divorced,Unemployed,Below 5 Lakhs,None*/
            else if (agepoints == "100" && (Marpoints == "25" || Marpoints == "50" || Marpoints == "100") && employpoints == "25" && Salarypoints == "25" && checkpoints == "25") {
                // alert("4");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);   
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a single person who is not earning at the moment. We assume that you are meeting your daily expenses with the support from your parents or relatives.";

            }
            /*5. 25 - 30,Married,Unemployed,Below 5 Lakhs,None*/
            else if (agepoints == "25" && Marpoints == "75" && employpoints == "25" && Salarypoints == "25" && checkpoints == "25") {
                // alert("5");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);   
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a Young Married  person Yet to have kids who is not earning at the moment. We assume that you are meeting your daily expenses with the support from your parents or relatives.";
            }
            /*6. 25 - 30,Married,Unemployed,Below 5 Lakhs,1/2/More than 2*/
            else if (agepoints == "25" && Marpoints == "75" && employpoints == "25" && Salarypoints == "25" && (checkpoints == "25" || checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                //alert("6");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);   
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a Young Married  person with young kids who is not earning at the moment. We assume that you are meeting your daily expenses with the support from your parents or relatives.";
            }
            /*7. 25 - 30,single,Salaried,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/

            else if (agepoints == "25" && Marpoints == "25" && employpoints == "50" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
                //  alert("7");
                //  alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);   
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a single young adult. You have just started your professional life.You are working hard, making money and spending the time with friends. You may have not thought too much about investments, while the truth is there are amazing options for you to enhance your lifestyle and save taxes.";
            }
            /*8. 25 - 30,To be Married Soon,Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/
            else if (agepoints == "25" && Marpoints == "50" && employpoints == "75" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
                //alert("8");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);   
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a single young adult. You have just started your professional life.You are working hard, making money and spending the time with friends. You may have not thought too much about investments, while the truth is there are amazing options for you to enhance your lifestyle and save taxes.";
            }
            /*9. 25 - 30,Married,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/
            else if (agepoints == "25" && Marpoints == "75" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
                //  alert("9");
                //  alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);   

                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a young and married person and yet to have kids. Life is exciting and beautiful at the moment. If you wish to keep life that way, then begin financial planning right away.";
            }
            /*10. 31 - 40,Single,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/
            else if (agepoints == "50" && Marpoints == "25" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
                //alert("10");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);  
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a single Matured adult. You have started your professional life since long. You are working hard, making money and spending the time with friends. You may have not thought too much about investments, while the truth is there are amazing options for you to enhance your lifestyle and save taxes.";
            }
            /*11. 31 - 40,To be Married Soon,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/
            else if (agepoints == "50" && Marpoints == "50" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
                // alert("11");
                //  alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);  
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a single Matured adult. You have started your professional life since long. You are working hard, making money and spending the time with friends. You may have not thought too much about investments, while the truth is there are amazing options for you to enhance your lifestyle and save taxes.";
            }
            /*12. 41 - 50,Single,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/
            else if (agepoints == "75" && Marpoints == "25" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "25")) {
                // alert("12");
                //  alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);  
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a single Matured adult. You have started your professional life since long. You are working hard, making money and spending the time with friends. You may have not thought too much about investments, while the truth is there are amazing options for you to enhance your lifestyle and save taxes.";
            }
            /*13. 41 - 50,To be Married Soon,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/
            else if (agepoints == "75" && Marpoints == "50" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "25")) {
                //alert("13");
                //  alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);  
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a single Matured adult. You have started your professional life since long. You are working hard, making money and spending the time with friends. You may have not thought too much about investments, while the truth is there are amazing options for you to enhance your lifestyle and save taxes.";
            }
            /*14. More Than 50,Single/To be Married Soon,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/
            else if (agepoints == "100" && (Marpoints == "25" || Marpoints == "50") && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "25")) {
                // alert("14");
                //  alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints);  
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a single Matured adult. You have started your professional life since long. You are working hard, making money and spending the time with friends. You may have not thought too much about investments, while the truth is there are amazing options for you to enhance your lifestyle and save taxes.";
            }
            /*15. 25 - 30,Married,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,1/2/More than 2 */
            else if ((agepoints == "25") && Marpoints == "75" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                //alert("15");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a young and married person with small kids. You are a young parent who wishes to give your children the best of education and facilities. It is very important for you to start financial planning right away.";
            }
            /*16. 31 - 40,Married,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,1/2/More than 2 */
            else if ((agepoints == "50") && Marpoints == "75" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                // alert("16");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a young and married person with small kids. You are a young parent who wishes to give your children the best of education and facilities. It is very important for you to start financial planning right away.";
            }

            /*17. 31 - 40,Married,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None */
            else if ((agepoints == "50") && Marpoints == "75" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
                //alert("17");
                //alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a matured and married person and yet to have kids. Life is exciting and beautiful at the moment. If you wish to keep life that way, then begin financial planning right away.";
            }

            /*18 41 - 50,Married,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None */
            else if ((agepoints == "75") && Marpoints == "75" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
                //alert("18");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a matured and married person and yet to have kids. Life is exciting and beautiful at the moment. If you wish to keep life that way, then begin financial planning right away.";
            }

            /*19  More than 50,Married,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None */
            else if ((agepoints == "100") && Marpoints == "75" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
                //  alert("19");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a matured and married person and yet to have kids. Life is exciting and beautiful at the moment. If you wish to keep life that way, then begin financial planning right away.";
            }

            /*20. 31 - 40,Married,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,1/2/More than 2 */
            else if ((agepoints == "50") && Marpoints == "75" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                //alert("20");
                //  alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a matured and married person with matured children. You are matured parent who wishes to give your children the best of future facilities. It is very important for you to start financial planning right away.";
            }

            /*21. 41 - 50,Married,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,1/2/More than 2 */
            else if ((agepoints == "75") && Marpoints == "75" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                // alert("21");
                //alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a matured and married person with matured children. You are matured parent who wishes to give your children the best of future facilities. It is very important for you to start financial planning right away.";
            }

            /*22. More than 50,Married,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,1/2/More than 2*/
            else if ((agepoints == "100") && Marpoints == "75" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                // alert("22");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a matured and married person with matured children. You are matured parent who wishes to give your children the best of future facilities. It is very important for you to start financial planning right away.";
            }

            /*23. 25 - 30/31 - 40/41 - 50/More than 50,Single,Retired,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/
            else if ((agepoints == "25" || agepoints == "50" || agepoints == "75" || agepoints == "100") && Marpoints == "25" && employpoints == "100" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "25")) {
                // alert("23");
                //  alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a retired single person. You are living a relaxed life and enjoying your free time. In this blissful phase, it is wise for you to choose a financial plan that will give you both protection and security.";
            }

            /*24. 25 - 30/31 - 40/41 - 50/More than 50,Married,Retired,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/
            else if ((agepoints == "25" || agepoints == "50" || agepoints == "75" || agepoints == "100") && Marpoints == "75" && employpoints == "100" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "25")) {
                // alert("24");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a retired married person. You are living a relaxed life and enjoying your free time. In this blissful phase, it is wise for you to choose a financial plan that will give you both protection and security.";
            }

            /*25. 25 - 30/31 - 40/41 - 50/More than 50,Divorced,Retired,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/
            else if ((agepoints == "25" || agepoints == "50" || agepoints == "75" || agepoints == "100") && Marpoints == "100" && employpoints == "100" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "25")) {
                //alert("25");
                //  alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a retired Married person. You are living a relaxed life and enjoying your free time. In this blissful phase, it is wise for you to choose a financial plan that will give you both protection and security.";
            }

            /*26. 25 - 30/31 - 40/41 - 50/More than 50,Married,Retired,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,1/2/More than 2*/
            else if ((agepoints == "25" || agepoints == "50" || agepoints == "75" || agepoints == "100") && Marpoints == "75" && employpoints == "100" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                //  alert("26");
                //  alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a retired married person with matured children. You are living a relaxed life and enjoying your free time. In this blissful phase, it is wise for you to choose a financial plan that will give you both protection and security.";
            }

            /*27. 25 - 30/31 - 40/41 - 50/More than 50,Divorced,Retired,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,1/2/More than 2*/
            else if ((agepoints == "25" || agepoints == "50" || agepoints == "75" || agepoints == "100") && Marpoints == "100" && employpoints == "100" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                //  alert("27");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a retired Married person with matured children. You are living a relaxed life and enjoying your free time. In this blissful phase, it is wise for you to choose a financial plan that will give you both protection and security.";
            }
            /*28. 25 - 30,Divorced,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/
            else if (agepoints == "25" && Marpoints == "100" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
                // alert("28");
                //  alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a Young Divorced person without kids. Life is exciting and beautiful at the moment. If you wish to leep life this way, then begin financial planning right away.";
            }

            /*29. 25 - 30/31 - 40/41 - 50/More than 50,Divorced,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/
            else if ((agepoints == "50" || agepoints == "75" || agepoints == "100") && Marpoints == "100" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
                // alert("29");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a Matured Divorced person without kids. Life is exciting and beautiful at the moment. If you wish to leep life this way, then begin financial planning right away.";
            }

            //        /*30. 25 - 30,Divorced,,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/
            //        else if (agepoints == "25" && Marpoints == "100" && employpoints == "100" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
            //        alert("30");
            //        alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
            //            document.getElementById("td_Lifeprofile1").style.display="none";
            //            document.getElementById("td_Lifeprofile").style.display="block";
            //            document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a Retired Young Divorced   person without kids. Life is exciting and beautiful at the moment. If you wish to leep life this way, then begin financial planning right away.";
            //        }
            //        
            /*31. 25 - 30/31 - 40/41 - 50/More than 50,Divorced,Retired,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,None*/
            //        else if ((agepoints == "50" || agepoints == "75" || agepoints == "100") && Marpoints == "100" && employpoints == "100" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
            //        alert("31");
            //           alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
            //            document.getElementById("td_Lifeprofile1").style.display="none";
            //            document.getElementById("td_Lifeprofile").style.display="block";
            //            document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a Retired Matured Divorced person without kids. Life is exciting and beautiful at the moment. If you wish to leep life this way, then begin financial planning right away.";
            //        }

            /*32. 25 - 30,Divorced,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,1/2/More than 2*/
            else if (agepoints == "25" && Marpoints == "100" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                // alert("32");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a Divorced  young and married person with small kids. You are a young parent who wishes to give your children the best of education and facilities. It is very important for you to start financial planning right away.";
            }

            /*33. 25 - 30/31 - 40/41 - 50/More than 50,Divorced,Salaried/Self Employed,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,1/2/More than 2*/
            else if ((agepoints == "50" || agepoints == "75" || agepoints == "100") && Marpoints == "100" && (employpoints == "50" || employpoints == "75") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                // alert("33");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a Divorced  Matured and married person with Matured kids. You are a Matured parent who wishes to give your children the best of education and facilities. It is very important for you to start financial planning right away.";
            }

            /*34. 25 - 30,Divorced,Retired,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,1/2/More than 2*/
            //        else if (agepoints == "25" && Marpoints == "100" && employpoints == "100" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
            //        alert("34");
            //        alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
            //            document.getElementById("td_Lifeprofile1").style.display="none";
            //            document.getElementById("td_Lifeprofile").style.display="block";
            //            document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a Retired Young Divorced   person with small kids.You are living a relaxed life and enjoying your free time. In this blissful phase, it is wise for you to choose a financial plan that will give you both protection and security.";
            //        }

            /*35. 25 - 30/31 - 40/41 - 50/More than 50,Divorced,Retired,Below 5 Lakhs/5-15 Lakhs/15-30 Lakhs/Above 30 Lakhs,1/2/More than 2*/
            //        else if ((agepoints == "50" || agepoints == "75" || agepoints == "100") && Marpoints == "100" && employpoints == "100" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
            //        alert("35");
            //           alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
            //            document.getElementById("td_Lifeprofile1").style.display="none";
            //            document.getElementById("td_Lifeprofile").style.display="block";
            //            document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a Retired Matured Divorced person with matured kids. You are living a relaxed life and enjoying your free time. In this blissful phase, it is wise for you to choose a financial plan that will give you both protection and security.";
            //        }

            else if (agepoints == "25" && Marpoints == "25" && employpoints == "75" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
                //alert("34");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a single Matured adult.You have started your professional life since long.You are working hard, making money  and spending the time with friends. You may have not thought too much about investments, while the truth is there are amazing options for you to enhance your lifestyle and save taxes.";
            }

            else if ((agepoints == "50" || agepoints == "75" || agepoints == "100") && Marpoints == "75" && employpoints == "25" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
                //alert("32");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a Matured  Married person Yet to have kids who is not earning at the moment. We assume that you are meeting your daily expenses with the support from your parents or relatives.";
            }

            else if ((agepoints == "50" || agepoints == "75" || agepoints == "100") && Marpoints == "75" && employpoints == "25" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "25" || checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
               // alert("33");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a Matured Married person with Matured kids who is not earning at the moment. We assume that you are meeting your daily expenses with the support from your parents or relatives.";
            }

            else if (agepoints == "25" && Marpoints == "50" && (employpoints == "50" || employpoints == "100") && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25") {
                alert("34");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = " Our Profiler has identified you as a single young adult. You have just started your professional life.You are working hard, making money and spending the time with friends. You may have not thought too much about investments, while the truth is there are amazing options for you to enhance your lifestyle and save taxes.";
            }

            else if (agepoints == "25" && Marpoints == "100" && employpoints == "25" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
               // alert("35");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a Divorced person with young kids who is not earning at the moment. We assume that you are meeting your daily expenses with the support from your parents or relatives.";
            }

            else if ((agepoints == "50" || agepoints == "75") && Marpoints == "100" && employpoints == "25" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && (checkpoints == "50" || checkpoints == "75" || checkpoints == "100")) {
                // alert("36");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our profiler has identified you as a Divorced person with young kids who is not earning at the moment. We assume that you are meeting your daily expenses with the support from your parents or relatives.";
            }

            else if (agepoints == "100" && Marpoints == "50" && employpoints == "100" && (Salarypoints == "25" || Salarypoints == "50" || Salarypoints == "75" || Salarypoints == "100") && checkpoints == "25" ) {
                 //alert("37");
                // alert(agepoints + "/" + Marpoints + "/" + employpoints + "/" + Salarypoints + "/" + checkpoints); 
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Our Profiler has identified you as a retired single person. You are living a relaxed life and enjoying your free time. In this blissful phase, it is wise for you to choose a financial plan that will give you both protection and security.";
            }


            else {
                document.getElementById("td_Lifeprofile1").style.display = "none";
                document.getElementById("td_Lifeprofile").style.display = "block";
                document.getElementById("td_Lifeprofile").innerHTML = "Invalid Inputs. Please recheck your inputs.";
            }
        }