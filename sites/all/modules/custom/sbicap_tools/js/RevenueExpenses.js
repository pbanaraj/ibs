function cl_calculateRevenue() {

            var CL_tmon = 0;
            var CL_tyr = 0;
            var CL_timon = 0;
            var CL_tiyr = 0;

            for (i = 1; i < 30; i++) {
                var CL_mon = eval('document.cl_tool.xm' + i)
                var CL_yr = eval('document.cl_tool.xa' + i)
                if (CL_mon.value && !isNaN(CL_mon.value) && CL_yr.value && !isNaN(CL_yr.value)) {
                    CL_tmon += parseFloat(CL_mon.value);
                    CL_tyr += parseFloat(CL_yr.value);
                }
            }

            for (i = 1; i < 6; i++) {
                var CL_imon = eval('document.cl_tool.im' + i);
                var CL_iyr = eval('document.cl_tool.ia' + i);

                if (CL_imon.value && !isNaN(CL_imon.value) && CL_iyr.value && !isNaN(CL_iyr.value)) {
                    CL_timon += parseFloat(CL_imon.value);
                    CL_tiyr += parseFloat(CL_iyr.value);

                }
            }
            document.cl_tool.CL_mexp.value = CL_tmon.toFixed(2);
            document.cl_tool.CL_yrexp.value = CL_tyr.toFixed(2);
            document.cl_tool.CL_imt.value = CL_timon.toFixed(2);
            document.cl_tool.CL_iat.value = CL_tiyr.toFixed(2);
            if (CL_tmon.value != "") {
                CL_displayRevenue('result');
                document.getElementById("ans1").innerHTML = (CL_timon - CL_tmon).toFixed(2);
                document.getElementById("ans2").innerHTML = (CL_tiyr - CL_tyr).toFixed(2);
            }
            if (document.layers) {
                CL_displayRevenue('result');
                document.layers['result'].document.borrow.CL_dmon.value = CL_timon - CL_tmon;
                document.layers['result'].document.borrow.CL_dyr.value = CL_tiyr - CL_tyr;
            }
        }

        var CL_viewHide;
        if (document.layers) {
            visible = 'show';

            hidden = 'hide';

        }
        else if (document.all) {

            visible = 'visible';

            hidden = 'hidden';

        }

        function cl_checkRevenue(fld, typ) {
            if (typ == "int") {
                if (isNaN(fld.value) || !fld.value || parseFloat(fld.value) < 0) {
                    alert('Value should be greater than or equal to 0');
                    fld.focus();
                }

            }

            var nam = fld.name;


            if (nam.indexOf("xm") != -1) {
                var ot = eval('document.cl_tool.xa' + nam.substring(2, 6))
                ot.value = (parseFloat(fld.value) * 12).toFixed(2);

                var it = eval('document.cl_tool.xm' + nam.substring(2, 6))
                var temp = parseFloat(fld.value).toFixed(2);
                it.value = temp;

            }
            if (nam.indexOf("xa") != -1) {
                var ot = eval('document.cl_tool.xm' + nam.substring(2, 6))
                ot.value = (parseFloat(fld.value) / 12).toFixed(2);

                var it1 = eval('document.cl_tool.xa' + nam.substring(2, 6))
                var temp1 = parseFloat(fld.value).toFixed(2);
                it1.value = temp1;

            }
            if (nam.indexOf("im") != -1) {
                var ot = eval('document.cl_tool.ia' + nam.substring(2, 6))
                ot.value = (parseFloat(fld.value) * 12).toFixed(2);


                var it2 = eval('document.cl_tool.im' + nam.substring(2, 6))
                var temp2 = parseFloat(fld.value).toFixed(2);
                it2.value = temp2;
            }

            if (nam.indexOf("ia") != -1) {
                var ot = eval('document.cl_tool.im' + nam.substring(2, 6))
                ot.value = (parseFloat(fld.value) / 12).toFixed(2);

                var it3 = eval('document.cl_tool.ia' + nam.substring(2, 6))
                var temp3 = parseFloat(fld.value).toFixed(2);
                it3.value = temp3;

            }

            CL_displayRevenue('result');
            cl_calculateRevenue();
            cl_View();

        }

        function CL_displayRevenue(viewShow) {
            if (document.layers) {
                content = document.layers[viewShow];

            }
            else if (document.all) {
                content = document.all(viewShow).style;
            }
            document.getElementById("result").style.display = "inline";
        }

        function CL_hidRevenue(viewShow) {
            if (document.layers) {
                content = document.layers[viewShow];
            }
            else if (document.all) {
                content = document.all(viewShow).style;
            }
            document.getElementById("result").style.display = "none";
        }

        function Clear() {
            document.getElementById("pst_tax").value = "0";
            document.getElementById("pst_tax1").value = "0";
            document.getElementById("shouse").value = "0";
            document.getElementById("shouse1").value = "0";
            document.getElementById("inv").value = "0";
            document.getElementById("inv1").value = "0";
            document.getElementById("rental").value = "0";
            document.getElementById("rental1").value = "0";
            document.getElementById("other_income").value = "0";
            document.getElementById("other_income1").value = "0";
            document.getElementById("income").value = "0";
            document.getElementById("income1").value = "0";
            document.getElementById("grocery").value = "0";
            document.getElementById("grocery1").value = "0";
            document.getElementById("Medical").value = "0";
            document.getElementById("Medical1").value = "0";
            document.getElementById("house").value = "0";
            document.getElementById("house1").value = "0";
            document.getElementById("laundry").value = "0";
            document.getElementById("laundry1").value = "0";
            document.getElementById("basic").value = "0";
            document.getElementById("basic1").value = "0";
            document.getElementById("phone").value = "0";
            document.getElementById("phone1").value = "0";
            document.getElementById("mobile").value = "0";
            document.getElementById("mobile1").value = "0";
            document.getElementById("transport").value = "0";
            document.getElementById("transport1").value = "0";
            document.getElementById("cable").value = "0";
            document.getElementById("cable1").value = "0";
            document.getElementById("books").value = "0";
            document.getElementById("books1").value = "0";
            document.getElementById("news").value = "0";
            document.getElementById("news1").value = "0";
            document.getElementById("clothing").value = "0";
            document.getElementById("clothing1").value = "0";
            document.getElementById("care").value = "0";
            document.getElementById("care1").value = "0";
            document.getElementById("entertainment").value = "0";
            document.getElementById("entertainment1").value = "0";
            document.getElementById("travel").value = "0";
            document.getElementById("travel1").value = "0";
            document.getElementById("holiady").value = "0";
            document.getElementById("holiady1").value = "0";
            document.getElementById("Eating").value = "0";
            document.getElementById("Eating1").value = "0";
            document.getElementById("club").value = "0";
            document.getElementById("club1").value = "0";
            document.getElementById("house_rent").value = "0";
            document.getElementById("house_rent1").value = "0";
            document.getElementById("child").value = "0";
            document.getElementById("child1").value = "0";
            document.getElementById("home_loan").value = "0";
            document.getElementById("home_loan1").value = "0";
            document.getElementById("auto_loan").value = "0";
            document.getElementById("auto_loan1").value = "0";
            document.getElementById("other_loan").value = "0";
            document.getElementById("other_loan1").value = "0";
            document.getElementById("insurance").value = "0";
            document.getElementById("insurance1").value = "0";
            document.getElementById("household_gadgets").value = "0";
            document.getElementById("household_gadgets1").value = "0";
            document.getElementById("white_goods").value = "0";
            document.getElementById("white_goods1").value = "0";
            document.getElementById("festival").value = "0";
            document.getElementById("festival1").value = "0";
            document.getElementById("family").value = "0";
            document.getElementById("family1").value = "0";
            document.getElementById("other").value = "0";
            document.getElementById("other1").value = "0";
            document.getElementById("total_exp").value = "0";
            document.getElementById("total_exp1").value = "0";
        }

        function cl_validate(frm) {
            var i = 0;
            var temp, temp1;
            var n = 0;
            for (n = 0; n < frm.elements.length; n++) {
                temp = frm.elements[n].name;
                if (temp.indexOf("ia") != -1 || temp.indexOf("xa") != -1 || temp.indexOf("im") != -1 || temp.indexOf("ia") != -1) {
                    if (!frm.elements[n].value || isNaN(frm.elements[n].value) || parseFloat(frm.elements[n].value) < 0) {
                        alert("Enter a value Greater than or equal to 0");
                        frm.elements[n].focus();

                    }
                }
            }
            return true;
        }
        function cl_View() {
            if (document.layers)
                document.layers['result'].document.borrow.CL_dyr.focus();
            if (document.all)
                document.borrow.CL_dyr.focus();
        }